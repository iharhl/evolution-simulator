// #include "genome.h"

// Gene makeRandomGene()
// {
//     Gene gene;

//     gene.sourceType = random.generateRandomUint16() & 1;
//     gene.sourceId = random.generateRandomUint16();
//     gene.sinkType = random.generateRandomUint16() & 1;
//     gene.sinkId = random.generateRandomUint16();
//     gene.weight = random.generateRandomUint16();

//     return gene;
// }

// Genome makeRandomGenome()
// {
//     Genome genome;

//     unsigned length = 4; // should be global constexpr
//     for (unsigned n = 0; n < length; ++n) {
//         genome.push_back(makeRandomGene());
//     }

//     return genome;
// }
