#include <iostream>
#include "simulator.h"

Grid grid;
Population population;
RandomGenerator randomGen;

void simulator()
{
    grid.init(10, 10);
    std::cout << grid.sizeX() << "\n";

    population.Init(200);
    std::cout << population.Size() << "\n";

//     RandomGenerator random_gen;
//     for (int n = 0; n != 10; ++n) 
//     {
//         uint16_t rand1 = random_gen.generateRandomUint16();
//         uint8_t rand2 = random_gen.generateRandomUint8();
//         std::cout << (int)rand1 << " .. " << (int)rand2 << "\n";
//     }
}