#pragma once

#include <cstdio>

class Shape
{
public:
	Shape();
private:
	std::size_t sides;
	std::size_t area;
	std::size_t perimeter;
};
