#ifndef RANDOM_H_
#define RANDOM_H_

#include <cstdint>
#include <random>

struct RandomGenerator
{
public:
    RandomGenerator();
    uint16_t generateRandomUint16();
    uint8_t generateRandomUint8();
private:
    std::random_device rd;
    // std::uniform_int_distribution<int> distUint16(0, 0xffff);
    // std::uniform_int_distribution<int> distUint8(0, 0xff);
};

#endif