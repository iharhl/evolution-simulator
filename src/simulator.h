#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "pops.h"
#include "grid.h"
#include "random_gen.h"

extern RandomGenerator randomGen;

void simulator();
void simOneStep(Organism& organism, unsigned simStep);

#endif