#include "grid.h"
#include "simulator.h"

void Grid::init(uint16_t sizeX, uint16_t sizeY)
{
    // fill with zeros
    data = vector2d(sizeX, std::vector<uint16_t> (sizeY, 0));
};


Coord Grid::findEmptyLocation() const
{
    Coord loc;

    while(true)
    {
        // loc.x = randomGen.generateRandomUint16(0, grid.sizeX()-1);
        loc.x = randomGen.generateRandomUint16();
        // loc.y = randomGen.generateRandomUint16(0, grid.sizeY()-1);
        loc.y = randomGen.generateRandomUint16();
        if (grid.isEmptyAt(loc))
            break;
    }
    return loc;
};