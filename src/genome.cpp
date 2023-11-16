#include "simulator.h"
#include "genome.h"
#include "../utils/logger.h"

Gene makeRandomGene()
{
    Gene gene;

    // gene.sourceType = randomGen.generateRandomUint16() & 1; // for now always sensor
    gene.sourceId = randomGen.generateRandomUint16();
    // gene.sinkType = randomGen.generateRandomUint16() & 1; // for now always actuator
    gene.sinkId = randomGen.generateRandomUint16();
    gene.weight = (int16_t)(randomGen.generateRandomUint16() - 0x8000);

    Logger::Debug("makeRandomGene", (int)gene.sourceId, (int)gene.sinkId, (int)gene.weight);

    return gene;
}

Genome makeRandomGenome()
{
    Genome genome;

    unsigned length = 4; // should be global constexpr
    for (unsigned n = 0; n < length; ++n) {
        genome.push_back(makeRandomGene());
    }

    return genome;
}

Genome inheritGenome()
{
    // FIX
    return makeRandomGenome();
}