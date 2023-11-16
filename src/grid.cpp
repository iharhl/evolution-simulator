#include "grid.h"
#include "simulator.h"
#include "../utils/logger.h"

void Grid::init(uint16_t sizeX_, uint16_t sizeY_)
{
    Logger::Debug("Grid::init call with", sizeX_, sizeY_);

    // fill with zeros FIX
    data = vector2d(sizeX_, std::vector<uint16_t> (sizeY_, 0));

    Logger::Debug("Grid::init size after call", sizeX(), "x", sizeY());
};


Coord Grid::findEmptyLocation() const
{
    Coord loc;

    while(true)
    {
        loc.x = randomGen.generateRandomUint16_Grid();
        loc.y = randomGen.generateRandomUint16_Grid();

        Logger::Debug("Grid::findEmptyLocation", loc.x, loc.y);

        if (grid.isEmptyAt(loc))
            break;
    }
    return loc;
};