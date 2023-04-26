#include <iostream>
#include "src/grid.h"
#include "src/census.h"
#include "src/random.h"
#include <cstdint>

int main()
{
    Grid grid;
    grid.init(10, 10);
    std::cout << grid.sizeX() << "\n";

    Population colony_one;
    colony_one.initPopulation(200);
    std::cout << colony_one.populationSize() << "\n";

    RandomGenerator random_gen;
    for (int n = 0; n != 10; ++n) 
    {
        uint16_t rand1 = random_gen.generateRandomUint16();
        uint8_t rand2 = random_gen.generateRandomUint8();
        std::cout << (int)rand1 << " .. " << (int)rand2 << "\n";
    }
    
    return 0;
}