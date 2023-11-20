#include "organism.h"
#include "../utils/logger.h"

Organism::Organism(const uint16_t index_, const Coord loc_, Genome &&genome_)
    :
    index(index_),
    alive(true),
    age(0),
    coord(loc_),
    genome(std::move(genome_))

{
    Logger::Debug("Organism::init", index, "at coords", coord.x, coord.y);
}

Organism::~Organism()
{

}

bool Organism::isAlive() const
{
    return alive;
}