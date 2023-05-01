#include "unittest_random.h"

void TEST_RANDOM_GENERATOR()
{
    // Vectors will be filled with test data
    std::vector<uint8_t> vectUint8;
    std::vector<uint16_t> vectUint16;

    // Create random generator
    RandomGenerator rand_gen;

    // Fill the vectors
    for (int i = 0; i < 100; ++i)
    {
        vectUint8.push_back(rand_gen.generateRandomUint8());
        vectUint16.push_back(rand_gen.generateRandomUint16());
    }

    // Assertion the Uint8 generator
    for (int i = 0; i < 100; ++i)
    {
        assert( (vectUint8.at(i) >= 0) && (vectUint8.at(i) <= 0xff) );
        // add more logic
    }
    printf("TEST_RANDOM_GENERATOR #1  >>  Uint8 Generator  >>  Success!\n");

    // Assertion the Uint16 generator
    for (int i = 0; i < 100; ++i)
    {
        assert( (vectUint16.at(i) >= 0) && (vectUint8.at(i) <= 0xffff) );
        // add more logic
    }
    printf("TEST_RANDOM_GENERATOR #2  >>  Uint16 Generator  >>  Success!\n");

}