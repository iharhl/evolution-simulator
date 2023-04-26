#include "random.h"

RandomGenerator::RandomGenerator()
{
    std::uniform_int_distribution<int> distUint16(0,0xffff);
    std::uniform_int_distribution<int> distUint8(0,0xff);
}

uint16_t RandomGenerator::generateRandomUint16()
{
    return static_cast<uint16_t>(distUint16(rd));
}

uint8_t RandomGenerator::generateRandomUint8()
{
    return static_cast<uint8_t>(distUint8(rd));
}