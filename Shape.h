#pragma once

#include <cstdio>

class Shape
{
public:
	Shape();

	std::size_t calculateArea();

private:
	std::size_t sides;
	std::size_t area;
	std::size_t perimeter;
};
