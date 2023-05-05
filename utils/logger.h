#ifndef LOGGER_H_
#define LOGGER_H_

#include <iostream>
#include <mutex>
#include <fstream>

enum LogPriority
{
    DebugPriority,
    InfoPriority,
    WarnPriority,
    ErrorPriority,
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

private:
    Logger()
    { 
        // erase content of the file if exists
        // and check if it is possible to open
        m_logfile.open("utils/log.txt", std::ofstream::out); 
        if (!m_logfile.is_open()) { throw std::logic_error("Failed to initialize the log file\n"); }
        m_logfile.close();
    }
    ~Logger()
    {
        m_logfile.close();
    }

    LogPriority priority = DebugPriority;
    std::mutex log_mutex;
    std::ofstream m_logfile;

    // Only allowed to instanciate withit itself
    static Logger& get()
    {
        static Logger s_instance;
        return s_instance;
    }

    void log(const char* priority_str, LogPriority message_priority, const char* message, const auto& ...args)
    {
        if (priority <= message_priority)
        {
            m_logfile.open("utils/log.txt", std::ofstream::app); // failure-safe way to keep the log saved
            std::scoped_lock lock(log_mutex);
            if (m_logfile.is_open()) 
            {
                m_logfile << priority_str << '\t' << message << ' ';
                ((m_logfile << args << ' '), ...) << '\n'; // binary fold to write template parameter pack with spaces
            } else { 
                throw std::logic_error("Log file failed to open during log request\n"); 
            } 
            m_logfile.close();
        }
    }
};


#endif