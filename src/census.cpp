#include "census.h"

void Population::init(unsigned populationSize)
{
    Logger::Debug("Population init call with", populationSize);

    organisms.resize(populationSize);

    Logger::Debug("Population init call, size after => ", Size());
}