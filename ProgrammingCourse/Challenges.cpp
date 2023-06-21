#include <iostream>
#include <vector>
#include <numeric>
#include <string>

void SectionFourChallenge()
{
	int number{};
	std::cout << "Enter your number between 1 and 100: ";
	std::cin >> number;
	std::cout << "Amazing! That's my favourite number too! " << std::endl;
	std::cout << "No really, " << number << " is my favourite number." << std::endl;
}

void SectionSixChallenge()
{
	std::cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
	std::cout << "How many small rooms would you like cleaned? ";
	short small_rooms;
	std::cin >> small_rooms;

	std::cout << "How many large rooms would you like cleaned? ";
	short large_rooms;
	std::cin >> large_rooms;

	std::cout << "\nEstimate for carpet cleaning service\n";
	std::cout << "Number of small rooms: " << small_rooms << std::endl;
	std::cout << "Number of large rooms: " << large_rooms << std::endl;

	const short small_price = 25;
	const short large_price = 35;
	std::cout << "Price per small room: $" << small_price << std::endl;
	std::cout << "Price per large room: $" << large_price << std::endl;

	short total_cost = small_rooms * small_price + large_rooms * large_price;
	std::cout << "Cost : &" << total_cost << std::endl;

	const double tax_rate = 0.06;
	double total_tax = total_cost * tax_rate;
	std::cout << "Tax: $" << total_tax << std::endl;

	std::cout << "==============================\n";
	std::cout << "Total estimate: $" << total_cost + total_tax << std::endl;

	const short days = 30;
	std::cout << "This estimate is valid for " << days << " days\n";
}

void SectionSevenChallenge()
{
	std::vector<int> vector1{};
	std::vector<int> vector2{};

	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "Vector1 elements: " << vector1.at(0) << " " << vector1.at(1) << "\nVector1 size: " << vector1.size() << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);
	std::cout << "Vector2 elements: " << vector2.at(0) << " " << vector2.at(1) << "\nVector2 size: " << vector2.size() << std::endl;

	std::vector< std::vector<int> > vector_2d{};

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	std::cout << "Vector_2d elements:\n" << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl
										 << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;

	vector1.at(0) = 1000;
					
	std::cout << "Vector_2d elements:\n" << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << std::endl
										 << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << std::endl;

	std::cout << "Vector1 elements: " << vector1.at(0) << " " << vector1.at(1) << "\nVector1 size: " << vector1.size() << std::endl;
}

void SectionEightChallenge()
{
	const int dollar{ 100 };
	const int quarter{ 25 };
	const int dime{ 10 };
	const int nickle{ 5 };
	const int penny{ 1 };

	std::cout << "Enter the amount in cents: ";
	int cents{}, rest{};
	std::cin >> cents;

	std::cout << "You can provide this change as follows:\n";
	std::cout << "dollars\t\t:" << cents / dollar << std::endl;
	rest = cents % dollar;
	std::cout << "quarters\t:" << rest / quarter << std::endl;
	rest %= quarter;
	std::cout << "dimess\t\t:" << rest / dime << std::endl;
	rest %= dime;
	std::cout << "nickles\t\t:" << rest / nickle << std::endl;
	rest %= nickle;
	std::cout << "pennies\t\t:" << rest << std::endl;
}

void SectionNineChallenge()
{
	char selection{};
	std::vector<int> numbers{1, 2, 3};
	//numbers.clear();
	while (selection != 'Q' and selection != 'q')
	{
		std::cout << "P - Print numbers\n"
			<< "A - Add a number\n"
			<< "M - Display mean of numbers\n"
			<< "S - Display the smallest number\n"
			<< "L - Display the largest number\n"
			<< "Q - Quit\n\n";
		std::cout << "Enter your selection: ";
		std::cin >> selection;

		switch (selection)
		{
			case 'p':
			case 'P': 
			{
				std::cout << "[";
				//for (int value : numbers) std::cout << " " << value << " ";
				for (int index = 0; index < numbers.size(); index++)
				{
					std::cout << " " << numbers.at(index) << " ";
				}
				std::cout << "]";

				if (numbers.size() == 0)
				{
					std::cout << "- the list is empty";
				}
				std::cout << std::endl;
				break;
			}

			case 'A':
			case 'a':
			{
				std::cout << "Enter your number: ";
				int number{};
				std::cin >> number;
				std::cout << number << " added\n";
				numbers.push_back(number);
				break;
			}

			case 'M':
			case 'm':
			{
				if (numbers.size() == 0)
				{
					std::cout << "Unable to calculate the mean, no data\n";
				}
				else
				{
					float avarage = std::accumulate(numbers.begin(), numbers.end(), 0) / numbers.size();
					std::cout << "Mean of numbers - " << avarage << std::endl;
				}
				break;
			}

			case 'S':
			case 's':
			{
				if (numbers.size() == 0)
				{
					std::cout << "Unable to calculate the smallest number, no data\n";
				}
				else
				{
					int smallest = *std::min_element(numbers.begin(), numbers.end());
					std::cout << "Smallest number is " << smallest << std::endl;
				}
				break;
			}

			case 'L':
			case 'l':
			{
				if (numbers.size() == 0)
				{
					std::cout << "Unable to calculate the largest number, no data\n";
				}
				else
				{
					int largest = *std::max_element(numbers.begin(), numbers.end());
					std::cout << "Largest number is " << largest << std::endl;
				}
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

void SectionTenChallenge()
{
	std::string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz"};
	std::string cypher_key{"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnmp"};
	std::string message{};
	std::string encrypted_message{};
	std::string decrypted_message{};

	std::cout << "Type your super secret message:\n";
	getline(std::cin, message);
	size_t index{};
	for (char letter : message)
	{
		index = alphabet.find(letter);
		encrypted_message += cypher_key.at(index);
	}
	std::cout << "Your encrypted message is: \n" << encrypted_message << std::endl;

	for (char letter : encrypted_message)
	{
		index = cypher_key.find(letter);
		decrypted_message += alphabet.at(index);
	}

	std::cout << "Your decrypted message is: \n" << decrypted_message << std::endl;
}