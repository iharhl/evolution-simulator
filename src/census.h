#ifndef CENSUS_H_
#define CENSUS_H_

#include <vector>
#include "genome.h"
#include "organism.h"
#include "grid.h"

struct Population
{
public:
    void init(unsigned population);
    unsigned Size() const {return organisms.size(); }
    Organism & operator[](uint16_t index) { return organisms[index]; }
private:
    std::vector<Organism> organisms;
};

#endif