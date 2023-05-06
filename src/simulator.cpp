#include <iostream>
#include "simulator.h"

Grid grid;
Population population;
RandomGenerator randomGen;

// temp global variables
unsigned generation_count = 0;
unsigned maxGenerations = 2;
unsigned stepsPerGeneration = 5;
unsigned populationSize = 3;


void simStepOneOrganism(Organism& organism, unsigned simStep)
{
    ++organism.age;
    // calc and perform action
}

void simulator()
{

    Logger::Debug("Simulator started", "");

    grid.init(20, 20);
    population.init(populationSize);

    initGenerationZero();

    // while (generation_count < maxGenerations)
    // {
    //     for (unsigned simStep = 0; simStep < stepsPerGeneration; ++simStep)
    //     {
    //         for (unsigned organismId = 0; organismId < populationSize; ++organismId)
    //         {
    //             if (population[organismId].alive)
    //             {
    //                 simStepOneOrganism(population[organismId], simStep);
    //             }
    //         }
    //     }
    //     // end of the generation
    //     // spawn new generation from the old one
    // }

    Logger::Debug("Simulator done", "");
}