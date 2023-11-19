#include <iostream>
#include "simulator.h"

// Grid grid;
Population population;
RandomGenerator randomGen;

// FIX temp global variables
unsigned generation_count = 0;
unsigned maxGenerations = 3;
unsigned stepsPerGeneration = 5;
unsigned populationSize = 3;

void simulator()
{

    Logger::Debug("Simulator started", "");

    Grid grid(20, 20);
    // grid.init(20, 20);
    population.init(populationSize);

    population.spawnGenerationZero(grid);

    while (generation_count < maxGenerations)
    {
        for (unsigned simStep = 0; simStep < stepsPerGeneration; ++simStep)
        {
            for (unsigned organismId = 0; organismId < populationSize; ++organismId)
            {
                if (population[organismId].isAlive())
                {
                    simStepOneOrganism(population[organismId], simStep);
                }
            }
        }
        Logger::Debug("Generation", generation_count+1);

        // spawn new generation from the old one
        population.spawnNewGeneration(grid);

        generation_count++;
    }

    Logger::Debug("Simulator done", "");
}

void simStepOneOrganism(Organism& organism, unsigned simStep)
{
    // Increment age of an ogranism
    ++organism;

    // Calc and perform actions...
}