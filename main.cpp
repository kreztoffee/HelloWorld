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

	Shape newShape;
	std::size_t area = newShape.calculateArea();

	std::cout << "\n";
	std::cout << "area: " << area;

	return 0;
}
