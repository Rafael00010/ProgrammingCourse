#include <iostream>

int* apply_all(int* array1, int size1, int* array2, int size2)
{
	int* new_array = new int[size1 * size2];
	int new_index{};

	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			*(new_array + (new_index++)) = *(array2 + i) * *(array1 + j);
		}
	}

	return new_array;
}

void print(int temp_array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << temp_array[i] << " ";
	}
	std::cout << std::endl;
}

void SectionTwelveChallenge()
{
	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 10,20,30 };

	std::cout << "Array1: ";
	print(array1, 5);

	std::cout << "Array2: ";
	print(array2, 3);

	int* results = apply_all(array1, 5, array2, 3);
	std::cout << "Results: \n";
	print(results, 15);

	delete[] results;
}