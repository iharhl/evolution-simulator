#include "simulator.h"
#include "../utils/logger.h"

Gene makeRandomGene()
{
    Gene gene;

    gene.sourceType = randomGen.generateRandomUint16();// & 1;
    gene.sourceId = randomGen.generateRandomUint16();
    gene.sinkType = randomGen.generateRandomUint16();// & 1;
    gene.sinkId = randomGen.generateRandomUint16();
    gene.weight = randomGen.generateRandomUint16();

    Logger::Debug("Make rand gene call => ", gene.sourceType, gene.sourceId, gene.sinkType, gene.sinkId, gene.weight);

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
