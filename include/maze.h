#ifndef MAZE_H
#define MAZE_H

struct Cell
{
    bool north;
    bool south;
    bool east;
    bool west;

    bool visited;

    int flood;
};

extern Cell maze[16][16];

void initMaze();

void updateWalls();

#endif
