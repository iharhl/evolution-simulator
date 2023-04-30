#ifndef CENSUS_H_
#define CENSUS_H_

#include <vector>
#include "genome.h"
#include "organism.h"
#include "grid.h"

struct Population
{
public:
    void Init(unsigned population);
    unsigned Size() const {return organisms.size(); } 
    void InitGenerationZero();

private:
    std::vector<Organism> organisms;
};

#endif