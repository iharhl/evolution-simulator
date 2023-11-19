#ifndef POPS_H_
#define POPS_H_

#include <vector>
#include "genome.h"
#include "organism.h"
#include "grid.h"
#include "../utils/logger.h"

class Population
{
public:
    void init(unsigned population);
    void spawnGenerationZero(const Grid& grid);
    void spawnNewGeneration(const Grid& grid);
    bool isOrganismAlive(const unsigned index) const;
    unsigned Size() const {return organisms.size(); }
    Organism& operator[](uint16_t index) { return organisms[index]; }
private:
    std::vector<Organism> organisms; // TODO: fix the intialization to be generation zero!!
};

// void initGenerationZero(Population& population, Grid& grid);

#endif