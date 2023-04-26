#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <cstdint>
#include <vector>

typedef std::vector<std::vector<uint16_t>> vector2d;

struct Coord
{
    int16_t x;
    int16_t y;
};

#endif