#ifndef MAZE_H_
#define MAZE_H_

#include <cstdint>
#include <vector>

class Maze
{
public:
	inline Maze(const uint8_t width, const uint8_t length)
	: width(width)
	, length(length)
	, ground(0)
	{
	}

private:
	const uint8_t width;
	const uint8_t length;
	const std::vector<std::vector<uint8_t>> ground;
};

#endif // MAZE_H_
