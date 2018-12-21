#include <cstdio>
#include <cstdint>
#include <vector>

#include "Maze.h"

int main()
{
	const uint8_t x = 2;
	const uint8_t y = 2;
//	const std::vector<uint8_t> state = {1, 9, 13, 14, 15, 20, 21, 22, 25, 26, 29, 30, 31, 34, 35, 36, 39};
	const std::vector<uint8_t> state = {};
	Maze maze(x, y, state);
	maze.print_maze();
	return 0;
}
