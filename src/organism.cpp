#include "organism.h"

void Organism::init(uint16_t index_, Coord loc_, Genome &&genome_)
{
    index = index_;
    alive = true;
    age = 0;
    coord = loc_;
    genome = std::move(genome_);
    // createBrainFromGenome();
};