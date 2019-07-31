#include <iostream>
#include <vector>

#include "Shape.h"

int main()
{
	// send greetings
	std::cout << "Greetings, World!\n";
	
	// create a list of numbers
	std::vector<int> newlist = { 1, 2, 3, 4, 5 };
	
	// print out the list of numbers on one line
	for(auto& e : newlist)
		std::cout << e << " ";

	// sum up all the numbers
	std::size_t sum = 0;

	for (auto& e : newlist)
		sum += e;
	
	std::cout << "\n";
	std::cout << "sum: " << sum;

	// create a new shape
	Shape newShape;
	newShape.setWidthAndHeight(5, 4);
	std::size_t area = newShape.calculateArea();

	// print out the area
	std::cout << "\n";
	std::cout << "area: " << area;

	return 0;
}
