#include <iostream>
#include <string>
#include <utility>

void sortedList(std::string *array, int numbOfNames)
{
	for (int alphabetical = 0; alphabetical < numbOfNames - 1; ++alphabetical)
	{
		int thisNumber = alphabetical;

		for (int insideName = thisNumber + 1; insideName < numbOfNames; ++insideName)
		{
			if (array[insideName] < array[thisNumber])
			{
				thisNumber = insideName;
			}
		}
		std::swap(array[alphabetical], array[thisNumber]);
	}
}

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
	
	std::cout << "\nBranching worked!";

	std::cin.ignore();
	std::cin.get();

	return 0;
}