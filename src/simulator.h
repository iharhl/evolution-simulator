#ifndef SIMULATOR_H_
#define SIMULATOR_H_

#include "census.h"
#include "grid.h"
// #include "organism.h"
#include "random.h"

extern RandomGenerator randomGen;
extern Grid grid;
extern Population population;

void simulator();

#endif