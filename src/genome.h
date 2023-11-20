#ifndef GENOME_H_
#define GENOME_H_

#include <cstdint>
#include <vector>
// #include <tuple>

constexpr uint16_t SENSOR = 1;  // always a source
constexpr uint16_t ACTION = 1;  // always a sink
// constexpr uint16_t NEURON = 0;  // can be either a source or sink


// Gene is the set of numbers representing its I/Os
typedef struct
{
    // uint16_t sourceType;
    uint16_t sourceId;
    // uint16_t sinkType;
    uint16_t sinkId;
    int16_t weight;
} Gene;

// Genome is a set of Genes
typedef std::vector<Gene> Genome;

Gene makeRandomGene();
Genome makeRandomGenome();
Genome inheritGenome();

#endif