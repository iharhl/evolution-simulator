#ifndef CENSUS_H_
#define CENSUS_H_

#include <vector>
#include "organism.h"

struct Population
{
public:
    void initPopulation(unsigned population);
    unsigned populationSize() const {return organisms.size(); } 
private:
    std::vector<Organism> organisms;
};

#endif