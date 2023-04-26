#ifndef CREATURE_H_
#define CREATURE_H_

#include "datatypes.h"
#include "genome.h"

struct Creature
{
    uint16_t index;
    bool alive;
    unsigned age;
    Coord coord;
    Genome genome;
    // NeuralNet nnet; // derived from .genome

    // std::array<float, Action::NUM_ACTIONS> feedForward(unsigned simStep); // reads sensors, returns actions

    // float getSensor(Sensor, unsigned simStep) const;
    void initialize(uint16_t index, Coord loc, Genome &&genome);
    // void createWiringFromGenome(); // creates .nnet member from .genome member
    // void printNeuralNet() const;
    // void printIGraphEdgeList() const;
    // void printGenome() const;

};

#endif