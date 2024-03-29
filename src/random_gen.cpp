#include "random_gen.h"

RandomGenerator::RandomGenerator() 
    : 
    m_Generator(std::random_device()()),
    m_DistributionUint16(0, 15),
    m_DistributionUint8()
{
    // Nothing
}

uint16_t RandomGenerator::generateRandomUint16_Grid()
{
    // std::uniform_int_distribution<int> distUint16(0,15); // fix
    // return (uint16_t)distUint16(rd);
    return m_DistributionUint16(m_Generator);
}

uint16_t RandomGenerator::generateRandomUint16()
{
    // std::uniform_int_distribution<int> distUint16(0,0xffff);
    // return (uint16_t)distUint16(rd);
    return m_DistributionUint16(m_Generator);
}

uint8_t RandomGenerator::generateRandomUint8()
{
    // std::uniform_int_distribution<int> distUint8(0,0xff);
    // return (uint16_t)distUint8(rd);
    return m_DistributionUint8(m_Generator);
}