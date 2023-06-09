#include "simulator.h"
#include <iostream>

void initGenerationZero()
{
    for (unsigned index = 0; index < population.Size(); ++index)
    {
        population[index].init(index, grid.findEmptyLocation(), makeRandomGenome());
        Logger::Debug("initGenerationZero", "one organism init");
    }

    Logger::Debug("initGenerationZero", "done");
}