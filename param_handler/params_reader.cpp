#include "params_reader.h"

void read_params()
{
    std::ifstream params;
    std::string s1;

    params.open("param_handler/params.txt", std::fstream::in);

    if (params.is_open())
    {
        while (std::getline(params, s1))
        {
            std::cout << s1 << "\n";
        }
    } else {
        throw std::logic_error("Cannot open the parameter list\n");
    }
    params.close();
}