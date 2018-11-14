#include <iostream>
#include <string>
#include <utility>
#include "includeFunctions.h"



int main()
{
	std::cout << "How many names do you wish to enter? ";
	int numbOfNames;
	std::cin >> numbOfNames;

	std::string *array = new std::string[numbOfNames];

	for (int i = 0; i < numbOfNames; ++i)
	{
		std::cout << "Enter name #" << i + 1 << "\n";
		std::cin >> array[i];
	}

	std::cout << "\nBefore sort: \n[";
	for (int placeHolder = 0; placeHolder < numbOfNames; ++placeHolder)
	{
		std::cout << array[placeHolder] << ", ";
	}
	std::cout << "]";
	
	sortedList(array, numbOfNames);

	std::cout << "\n\nAfter list sort: \n[";
	for (int placeHolder = 0; placeHolder < numbOfNames; ++placeHolder)
	{
		std::cout << array[placeHolder] << ", ";
	}
	std::cout << "]";

	delete[] array;
	
	std::cout << "\nBranching worked!\n";
	confirmation();

	std::cin.ignore();
	std::cin.get();

	return 0;
}