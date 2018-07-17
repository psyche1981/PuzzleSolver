#include <iostream>

void printOptions()
{
	std::cout << "Choose a puzzle to solve" << std::endl;
	std::cout << "1. Alpha Cipher\n" <<
		"2. Sudoku\n" <<
		"Q. Quit" << std::endl;
}

int main()
{
	std::cout << "************ Welcome to Puzzle Solver 3000 **************" << std::endl;
	printOptions();
	bool done = false;
	char ans;
	while (!done)
	{		
		std::cin >> ans;
		switch (ans)
		{
		case '1':
		{
			std::cout << "Solving an Alpha Cipher Puzzle..." << std::endl;
			printOptions();
			break;
		}
		case '2':
		{
			std::cout << "Solving a Sudoku..." << std::endl;
			printOptions();
			break;
		}
		case 'Q':
		case 'q':
			std::cout << "Exiting...";
			done = true;
			break;
		default:
			std::cout << "Pick an option from the list" << std::endl;
		}
	}
	std::cin.ignore();
	std::cin.get();
	return 0;
}