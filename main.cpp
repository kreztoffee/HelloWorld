#include <iostream>
#include <vector>

int main()
{
	std::cout << "Greetings, World!\n";
	
	std::vector<int> newlist = { 1, 2, 3, 4, 5 };
	
	for(auto& e : newlist)
		std::cout << e << " ";
	
	std::cout << "\n";
	
	return 0;
}
