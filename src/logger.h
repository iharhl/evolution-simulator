#ifndef LOGGER_H_
#define LOGGER_H_

#include <iostream>
#include <mutex>
#include <fstream>

enum LogPriority
{
    TracePriority,
    DebugPriority,
    InfoPriority,
    WarnPriority,
    ErrorPriority,
    CriticalPriority
};

// Multi-threading safe Logger singleton
struct Logger
{
public:
    Logger(const Logger&) = delete;

    static void SetPriority(LogPriority new_priority)
    {
        get().priority = new_priority;
    }

    template<typename... Args>
    static void Trace(const char* message, Args... args)
    {
        get().log("[TRACE]", TracePriority, message, args...);
    }

    template<typename... Args>
    static void Debug(const char* message, Args... args)
    {
        get().log("[DEBUG]", DebugPriority, message, args...);
    }

    template<typename... Args>
    static void Info(const char* message, Args... args)
    {
        get().log("[INFO]", InfoPriority, message, args...);
    }

    template<typename... Args>
    static void Warn(const char* message, Args... args)
    {
        get().log("[WARN]", WarnPriority, message, args...);
    }

    template<typename... Args>
    static void Error(const char* message, Args... args)
    {
        get().log("[ERROR]", ErrorPriority, message, args...);
    }

    template<typename... Args>
    static void Critical(const char* message, Args... args)
    {
        get().log("[CRITICAL]", CriticalPriority, message, args...);
    }

private:
    Logger()
    { 
        m_logfile.open("utils/log.txt", std::ofstream::out); 
        if (!m_logfile.is_open()) { throw std::logic_error("Failed to open the log file\n"); }
    }
    ~Logger()
    {
        m_logfile.close();
    }

    LogPriority priority = TracePriority;
    std::mutex log_mutex;
    std::ofstream m_logfile;

    // Only allowed to instanciate withit itself
    static Logger& get()
    {
        static Logger s_instance;
        return s_instance;
    }

    void pp(const auto& ...args)
    {
        (std::cout << ... << args);
    }

    // template<typename... Args>
    void log(const char* priority_str, LogPriority message_priority, const char* message, const auto& ...args)
    {
        if (priority <= message_priority)
        {
            std::scoped_lock lock(log_mutex);
            if (m_logfile.is_open()) 
            {
                m_logfile << priority_str << '\t' << message << ' ';
                ((m_logfile << args << ' '), ...) << '\n'; // binary fold to write template parameter pack with spaces
            } else { 
                throw std::logic_error("Log file not opened during log request\n"); 
            } 
        }
    }
};


#endif