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
	
	std::cout << "\n";
	
	Shape newShape;
	
	return 0;
}
