#include "pops.h"

void Population::init(unsigned populationSize)
{
    Logger::Debug("Population::init call with", populationSize);

    organisms.resize(populationSize);

    Logger::Debug("Population::init size after call", Size());
}

/* */
// void initGenerationZero(Population& population, Grid& grid)
// {
//     for (unsigned index = 0; index < population.Size(); ++index)
//     {
//         population[index].init(index, grid.findEmptyLocation(), makeRandomGenome());
//         Logger::Debug("initGenerationZero", "one organism init");
//     }

//     Logger::Debug("initGenerationZero", "done");
// }

void Population::spawnGenerationZero(const Grid& grid)
{
    for (unsigned index = 0; index < organisms.size(); ++index)
    {
        organisms[index].init(index, grid.findEmptyLocation(), makeRandomGenome());
        Logger::Debug("initGenerationZero", "one organism init");
    }
    Logger::Debug("initGenerationZero", "done");
}

void Population::spawnNewGeneration(const Grid& grid)
{
    for (unsigned index = 0; index < organisms.size(); ++index)
    {
        organisms[index].init(index, grid.findEmptyLocation(), makeRandomGenome());
        Logger::Debug("initNewGeneration", "one organism init");
    }
    Logger::Debug("initNewGeneration", "done");    
}