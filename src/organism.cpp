#include "organism.h"
#include "../utils/logger.h"

Organism::Organism(uint16_t index_, Coord loc_, Genome &&genome_)
    :
    index(index_),
    alive(true),
    age(0),
    coord(loc_),
    genome(std::move(genome_))

{
    Logger::Debug("Organism::init", index, "at coords", coord.x, coord.y);
}

// void Organism::init(uint16_t index_, Coord loc_, Genome &&genome_)
// {
//     index = index_;
//     alive = true;
//     age = 0;
//     coord = loc_;

//     Logger::Debug("Organism::init", index, "at coords", coord.x, coord.y);

//     genome = std::move(genome_);
//     // createBrainFromGenome();
// };

bool Organism::isAlive() const
{
    return alive;
}