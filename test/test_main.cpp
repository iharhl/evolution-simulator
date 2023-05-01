#include "unittest_grid.h"
#include "unittest_random.h"

int main()
{
    // random
    TEST_RANDOM_GENERATOR();

    // grid
    TEST_GRID_GEOMETRY();
    TEST_GRID_CONTENT();
}