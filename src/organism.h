#ifndef ORGANISM_H_
#define ORGANISM_H_

#include "datatypes.h"
#include "genome.h"

class Organism
{
public:
    Organism(const uint16_t index_, const Coord loc_, Genome &&genome_);
    ~Organism();
    void decodeGenome();
    bool isAlive() const;
    unsigned getAge() const { return age; }
    Organism& operator++() { age++; return *this;}

private:
    uint16_t index;
    bool alive;
    unsigned age;
    Coord coord;
    Genome genome;
};

#endif