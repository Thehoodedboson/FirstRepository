#include <utility>
#include <string>

void sortedList(std::string *array, int numbOfNames)
{
	for (int alphabetical = 0; alphabetical < numbOfNames - 1; ++alphabetical)
	{
		int thisNumber = alphabetical;

		for (int insideName = thisNumber + 1; insideName < numbOfNames; ++insideName)
		{
			if (array[insideName] > array[thisNumber])
			{
				thisNumber = insideName;
			}
		}
		std::swap(array[alphabetical], array[thisNumber]);
	}
}