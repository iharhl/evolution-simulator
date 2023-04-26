#include "grid.h"

void Grid::init(uint16_t sizeX, uint16_t sizeY)
{
    // fill with zeros
    data = vector2d(sizeX, std::vector<uint16_t> (sizeY, 0));
};
