#include "grid.h"
#include "simulator.h"
#include "../utils/logger.h"

Grid::Grid(uint16_t sizeX_, uint16_t sizeY_)
    :
    data(vector2d(sizeX_, std::vector<uint16_t> (sizeY_, 0)))
{
    Logger::Debug("Grid::init size after call", sizeX(), "x", sizeY());
}

Grid::~Grid()
{

}


Coord Grid::findEmptyLocation() const
{
    Coord loc;

    while(true)
    {
        loc.x = randomGen.generateRandomUint16_Grid(); // FIX
        loc.y = randomGen.generateRandomUint16_Grid();

        Logger::Debug("Grid::findEmptyLocation", loc.x, loc.y);

        if (this->isEmptyAt(loc))
            break;
    }
    return loc;
};