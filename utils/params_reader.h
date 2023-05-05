#ifndef PARAMS_READER_H_
#define PARAMS_READER_H_

#include <fstream>
#include <string>
#include <iostream>

struct Params
{
public:
    unsigned GRID_SIZE_X = 20;
    unsigned GRID_SIZE_Y = 20;
};

void read_params();

#endif