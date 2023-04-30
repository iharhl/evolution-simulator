#include "census.h"

void Population::Init(unsigned population)
{
    organisms.resize(population);
}

void Population::InitGenerationZero()
{
    // for (unsigned index = 0; index <= Size(); ++index)
    // {
    //     organisms[index].Init(index, grid.findEmptyLocation(), makeRandomGenome());
    // }
}