#include <iostream>
#include <vector>

int main()
{
	std::cout << "Greetings, World!\n";
	
	// create a list of numbers
	std::vector<int> newlist = { 1, 2, 3, 4, 5 };
	
	// print out the list of numbers on one line
	for(auto& e : newlist)
		std::cout << e << " ";
	
	std::cout << "\n";
	
	return 0;
}
