#include "pops.h"

Population::Population(const unsigned size, const Grid& grid) : organisms()
{
    organisms.reserve(size);
    for (unsigned i = 0; i < size; ++i)
    {
        organisms.push_back(Organism(i, grid.findEmptyLocation(), makeRandomGenome()));
        Logger::Debug("SpawnGenerationZero", "organism", i);
    }
}

Population::~Population()
{
    
}

void Population::spawnNewGeneration(const Grid& grid)
{
    for (unsigned index = 0; index < organisms.size(); ++index)
    {
        // organisms[index].init(index, grid.findEmptyLocation(), makeRandomGenome());
        Logger::Debug("SpawnNewGeneration", "organism", index);
    }
    Logger::Debug("initNewGeneration", "done");    
}

bool Population::isOrganismAlive(const unsigned index) const
{
    return organisms[index].isAlive();
}