#ifndef MAZE_H_
#define MAZE_H_

#include <cstdint>
#include <vector>

class Maze
{
public:
	inline Maze(const uint8_t width, const uint8_t length, const std::vector<uint8_t> field)
	: width(width)
	, length(length)
	, field(field)
	{
	}

	inline void print_maze()
	{
		uint8_t i = 1;
		uint8_t j = 0;
		bool changed;
		while (i < width * length)
		{
			changed = (i == field[j]);
			if (changed)
				++j;
			print_element(changed);
			if (i%width == 0)
				printf("\n");
			++i;
		}
	}
private:
	inline void print_element(bool change)
	{
		if (change)
			element = 1 - element;
		if (element == 0)
			printf("#");
		if (element == 1)
			printf(" ");
	}
	int element = 0;
	const uint8_t width;
	const uint8_t length;
	const std::vector<uint8_t> field;
};

#endif // MAZE_H_