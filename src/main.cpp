#include <cstdio>
#include <cstdint>
#include <vector>

#include "Maze.h"

int main()
{
	const uint8_t x = 14;
	const uint8_t y = 14;
	const std::vector<uint8_t> state = {15, 17, 30, 32, 45, 47, 60};
//	const std::vector<uint8_t> state = {5, 7, 10, 12, 15};
	Maze maze(x, y, state);
	maze.print_matrix();
	maze.print_maze();
	return 0;
}
