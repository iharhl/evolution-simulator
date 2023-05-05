#include <iostream>
#include "src/simulator.h"
#include "src/logger.h"
#include <cstdint>
#include "utils/params_reader.h"

int main()
{
    simulator();

    read_params();

    Logger::Debug("Help!!", "w1", "w2");
    Logger::Error("Damn", 2, 4, "Hee");

    return 0;
}