#include <iostream>
#include "simulator.h"

extern void initGenerationZero();

Grid grid;
Population population;
RandomGenerator randomGen;

void simulator()
{
    grid.init(10, 10);
    std::cout << grid.sizeX() << "\n";

    population.init(10);
    std::cout << population.Size() << "\n";

    // initGenerationZero(); <-- segmentation error
}