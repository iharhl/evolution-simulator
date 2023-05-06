#include "grid.h"
#include "simulator.h"
#include "../utils/logger.h"

void Grid::init(uint16_t sizeX_, uint16_t sizeY_)
{
    Logger::Debug("Grid::init call with", sizeX_, sizeY_);

    // fill with zeros
    data = vector2d(sizeX_, std::vector<uint16_t> (sizeY_, 0));

    Logger::Debug("Grid::init size after call", sizeX(), "x", sizeY());
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

        Logger::Debug("Grid::findEmptyLocation", loc.x, loc.y);

        if (grid.isEmptyAt(loc))
            break;
    }
    return loc;
};