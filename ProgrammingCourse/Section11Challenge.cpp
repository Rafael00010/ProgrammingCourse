#include <iostream>
#include <vector>
#include <numeric>
#include <string>

void PrintVector(const std::vector<int>& vector);
void AddNumberToVector(std::vector<int>& vector);
void MeanOfVector(const std::vector<int>& vector);
void SmallestNumber(const std::vector<int>& vector);
void LargestNumber(const std::vector<int>& vector);
void PrintMenu();


int sum_of_digits(int n) {
    // Write your code below this line
    static int sum{};
    if (n / 10 != 0 or n % 10 != 0)
    {
        sum += n % 10;
        sum_of_digits(n / 10);
    }
    else
    {
        return sum;
    }
}

void SectionElevenChallenge()
{
	char selection{};
	std::vector<int> numbers{ 1, 2, 3 };
	//numbers.clear();
	while (selection != 'Q' and selection != 'q')
	{
        PrintMenu();
		std::cin >> selection;

		switch (selection)
		{
		case 'p':
		case 'P':
		{
			PrintVector(numbers);
			break;
		}
		case 'A':
		case 'a':
		{
			AddNumberToVector(numbers);
			break;
		}
		case 'M':
		case 'm':
		{
			MeanOfVector(numbers);
			break;
		}
		case 'S':
		case 's':
		{
			SmallestNumber(numbers);
			break;
		}
		case 'L':
		case 'l':
		{
			LargestNumber(numbers);
			break;
		}
		case 'Q':
		case 'q':
		{
			std::cout << "Goodbye!!!!\n";
			break;
		}
		default: std::cout << "Unknown selection, please try again.\n";
		}
		std::cout << std::endl;
	}
}

void PrintVector(const std::vector<int>& vector)
{
    std::cout << "[";
    //for (int value : numbers) std::cout << " " << value << " ";
    for (int index = 0; index < vector.size(); index++)
    {
        std::cout << " " << vector.at(index) << " ";
    }
    std::cout << "]";

    if (vector.size() == 0)
    {
        std::cout << "- the list is empty";
    }
    std::cout << std::endl;
}

void AddNumberToVector(std::vector<int>& vector)
{
    std::cout << "Enter your number: ";
    int number{};
    std::cin >> number;
    std::cout << number << " added\n";
    vector.push_back(number);
}

void MeanOfVector(const std::vector<int>& vector)
{
    if (vector.size() == 0)
    {
        std::cout << "Unable to calculate the mean, no data\n";
    }
    else
    {
        float avarage = std::accumulate(vector.begin(), vector.end(), 0) / vector.size();
        std::cout << "Mean of numbers - " << avarage << std::endl;
    }
}

void SmallestNumber(const std::vector<int>& vector)
{
    if (vector.size() == 0)
    {
        std::cout << "Unable to calculate the smallest number, no data\n";
    }
    else
    {
        int smallest = *std::min_element(vector.begin(), vector.end());
        std::cout << "Smallest number is " << smallest << std::endl;
    }
}

void LargestNumber(const std::vector<int>& vector)
{
    if (vector.size() == 0)
    {
        std::cout << "Unable to calculate the largest number, no data\n";
    }
    else
    {
        int largest = *std::max_element(vector.begin(), vector.end());
        std::cout << "Largest number is " << largest << std::endl;
    }
}

void PrintMenu()
{
    std::cout << "P - Print numbers\n"
        << "A - Add a number\n"
        << "M - Display mean of numbers\n"
        << "S - Display the smallest number\n"
        << "L - Display the largest number\n"
        << "Q - Quit\n\n";
    std::cout << "Enter your selection: ";
}