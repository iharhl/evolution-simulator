#ifndef GENOME_H_
#define GENOME_H_

#include <cstdint>
#include <vector>

constexpr uint8_t SENSOR = 1;  // always a source
constexpr uint8_t ACTION = 1;  // always a sink
constexpr uint8_t NEURON = 0;  // can be either a source or sink

struct Gene
{
    uint8_t sourceType;
    uint8_t sourceId;
    uint8_t sinkType;
    uint8_t sinkId;
    uint8_t weight;
};

// Genome is a set of Genes
typedef std::vector<Gene> Genome;

extern Gene makeRandomGene();
extern Genome makeRandomGenome();

#endif