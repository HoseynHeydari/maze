#include <cstdio>
#include <cstdint>
#include <vector>

#include "Maze.h"
#include "FixedMaze.h"

int main()
{
	FixedMaze fixed_maze;
	fixed_maze.print();
	Maze maze(0,0);
	return 0;
}
