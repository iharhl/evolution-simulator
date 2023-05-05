#include "organism.h"
#include "../utils/logger.h"

void Organism::init(uint16_t index_, Coord loc_, Genome &&genome_)
{
    index = index_;
    alive = true;
    age = 0;
    coord = loc_;

    Logger::Debug("Organism init => ", index, "at coords => ", coord.x, coord.y);

    genome = std::move(genome_);
    // createBrainFromGenome();
};