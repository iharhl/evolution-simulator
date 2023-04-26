#include <iostream>
#include "src/grid.h"
#include "src/creature.h"

int main()
{
    Grid grid;
    grid.init(10, 10);
    std::cout << grid.sizeX();

    // Creature creature;
    // creature.initialize(0, loc);

    printf("HI\n");
    return 0;
}