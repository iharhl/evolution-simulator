#include "unittest_grid.h"

void TEST_GRID_GEOMETRY()
{
    // initialize grid
    Grid grid;
    grid.init(250, 200);

    // extract size
    uint16_t gridSizeX = grid.sizeX();
    uint16_t gridSizeY = grid.sizeY();

    // assert
    assert( gridSizeX == 250 );
    printf("TEST_GRID_GEOMETRY #1  >>  Grid sizeX  >>  Success!\n");
    assert( gridSizeY == 200 );
    printf("TEST_GRID_GEOMETRY #2  >>  Grid sizeY  >>  Success!\n");

    // set locations in/out of the bounds
    Coord loc1 = { (uint16_t)100, (uint16_t)100 };
    Coord loc2 = { (uint16_t)251, (uint16_t)100 };

    // extract bounds check
    bool loc1InBounds = grid.isInBounds(loc1);
    bool loc2InBounds = grid.isInBounds(loc2);

    // assert
    assert( loc1InBounds == true );
    printf("TEST_GRID_GEOMETRY #3  >>  Coord in Bounds  >>  Success!\n");
    assert( loc2InBounds == false );
    printf("TEST_GRID_GEOMETRY #4  >>  Coord in Bounds  >>  Success!\n");
}

void TEST_GRID_CONTENT()
{
    // initialize grid
    Grid grid;
    grid.init(50, 50);

    // prep the id and coord of the organism
    uint16_t id1 = 777;
    uint16_t id2 = 888;
    Coord loc = {(uint16_t)30, (uint16_t)31};

    // place them on the grid
    grid.set(10, 10, id1);
    grid.set(loc, id2);

    // extract data
    bool isSetId1 = grid.isOccupiedAt({(uint16_t)10, (uint16_t)10});
    uint16_t setValId1 = grid.at({(uint16_t)10, (uint16_t)10});
    bool isSetId2 = grid.isOccupiedAt({(uint16_t)10, (uint16_t)10});
    uint16_t setValId2 = grid.at((uint16_t)30, (uint16_t)31);

    // assert
    assert( isSetId1 == true && setValId1 == id1 );
    printf("TEST_GRID_CONTENT #1  >>  Grid set  >>  Success!\n");
    assert( isSetId2 == true && setValId2 == id2 );
    printf("TEST_GRID_CONTENT #2  >>  Grid set  >>  Success!\n");

}