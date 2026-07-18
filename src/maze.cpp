#include "maze.h"

Cell maze[16][16];

void initMaze()
{
    for(int y=0;y<16;y++)
    {
        for(int x=0;x<16;x++)
        {
            maze[y][x].north=false;
            maze[y][x].south=false;
            maze[y][x].east=false;
            maze[y][x].west=false;

            maze[y][x].visited=false;
            maze[y][x].flood=255;
        }
    }
}

void updateWalls()
{

}
