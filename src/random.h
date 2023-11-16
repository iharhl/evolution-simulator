#ifndef RANDOM_H_
#define RANDOM_H_

#include <cstdint>
#include <random>

struct RandomGenerator
{
public:
    RandomGenerator();
    uint16_t generateRandomUint16();
    uint16_t generateRandomUint16_Grid();
    uint8_t generateRandomUint8();
private:
    std::mt19937 m_Generator;
    std::uniform_int_distribution<uint16_t> m_DistributionUint16;
    std::uniform_int_distribution<uint8_t> m_DistributionUint8;
};

#endif