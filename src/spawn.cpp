#include "simulator.h"

void initGenerationZero()
{
    for (unsigned index = 0; index <= population.Size(); ++index)
    {
        population[index].Init(index, grid.findEmptyLocation(), makeRandomGenome());
    }
}