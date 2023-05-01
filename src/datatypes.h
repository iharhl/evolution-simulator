#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <cstdint>
#include <vector>

typedef std::vector<std::vector<uint16_t>> vector2d;

struct Coord
{
    uint16_t x;
    uint16_t y;
};

#endif