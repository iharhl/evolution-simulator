#ifndef ORGANISM_H_
#define ORGANISM_H_

#include "datatypes.h"
#include "genome.h"

class Organism
{
public:
    // float getSensor(Sensor, unsigned simStep) const;
    Organism(const uint16_t index_, const Coord loc_, Genome &&genome_);
    ~Organism();
    // void init(uint16_t index, Coord loc, Genome &&genome);
    void decodeGenome();
    // void printNeuralNet() const;
    // void printIGraphEdgeList() const;
    // void printGenome() const;
    bool isAlive() const;
    unsigned getAge() const { return age; }
    Organism& operator++() { age++; return *this;}

private:
    uint16_t index;
    bool alive;
    unsigned age;
    Coord coord;
    Genome genome;
    // NeuralNet nnet; // derived from .genome

    // std::array<float, Action::NUM_ACTIONS> feedForward(unsigned simStep); // reads sensors, returns actions

};

#endif