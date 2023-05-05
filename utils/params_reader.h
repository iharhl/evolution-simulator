#ifndef PARAMS_READER_H_
#define PARAMS_READER_H_

#include <fstream>
#include <string>
#include <iostream>

struct Params
{
public:
    const unsigned GRID_SIZE_X = 0;
    const unsigned GRID_SIZE_Y = 0;
};

void read_params();

#endif