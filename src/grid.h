#ifndef GRID_H_
#define GRID_H_

#include <cstdint>
#include "datatypes.h"

const uint16_t EMPTY = 0;
// const uint16_t BARRIER = 0xffff;

struct Grid
{
public:
    void init(uint16_t sizeX, uint16_t sizeY);
    uint16_t sizeX() const { return data.size(); }
    uint16_t sizeY() const { return data[0].size(); }
    void set(uint16_t x, uint16_t y, uint16_t val) { data[x][y] = val; }
    void set(Coord loc, uint16_t val) { data[loc.x][loc.y] = val; }
    bool isOccupiedAt(Coord loc) const { return at(loc) != EMPTY; }
    bool isInBounds(Coord loc) const { return loc.x >= 0 && loc.x < sizeX() && loc.y >= 0 && loc.y < sizeY(); }
    bool isEmptyAt(Coord loc) const { return at(loc) == EMPTY; }

    Coord findEmptyLocation() const;

    uint16_t at(Coord loc) const { return data[loc.x][loc.y]; }
    uint16_t at(uint16_t x, uint16_t y) const { return data[x][y]; }

private:
    vector2d data;
};

#endif