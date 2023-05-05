#include <iostream>
#include "simulator.h"

extern void initGenerationZero();

Grid grid;
Population population;
RandomGenerator randomGen;

void simulator()
{

    Logger::Debug("Simulator started", "");

    grid.init(20, 20);
    std::cout << grid.sizeX() << "\n";

    population.init(3);
    std::cout << population.Size() << "\n";

    initGenerationZero(); // <-- segmentation error

    Logger::Debug("Simulator done", "");
}