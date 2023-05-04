#include <iostream>
#include "src/simulator.h"
#include <cstdint>
#include "param_handler/params_reader.h"

int main()
{
    simulator();

    read_params();

    return 0;
}