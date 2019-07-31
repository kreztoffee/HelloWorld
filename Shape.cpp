#include "Shape.h"

Shape::Shape()
	: width(0)
	, height(0)
	, area(0)
	, perimeter(0)
{
	
}

void Shape::setWidthAndHeight(const std::size_t w, const std::size_t h)
{
	width = w;
	height = h;
}

std::size_t Shape::calculateArea()
{
	return width * height;
}
