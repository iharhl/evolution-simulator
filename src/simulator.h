#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "pops.h"
#include "grid.h"
#include "random.h"

extern RandomGenerator randomGen;
// extern Grid grid;
extern Population population;

void simulator();
void simStepOneOrganism(Organism& organism, unsigned simStep);

#endif