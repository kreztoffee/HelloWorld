#pragma once

#include <cstdio>

class Shape
{
public:
	Shape();
	
	void setWidthAndHeight(const std::size_t w, const std::size_t h);
	std::size_t calculateArea();

private:
	std::size_t width;
	std::size_t height;
	std::size_t area;
	std::size_t perimeter;
};
