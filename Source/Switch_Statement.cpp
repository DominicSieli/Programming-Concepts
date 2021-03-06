#include <iostream>

unsigned short number = 2;

enum class Data : unsigned short
{
	Data_0,
	Data_1,
	Data_2
};

int main()
{
	Data data = (Data)number;

	switch(data)
	{
		case Data::Data_0 : std::cout << "Loaded Data 0" << '\n';
		break;

		case Data::Data_1 : std::cout << "Loaded Data 1" << '\n';
		break;

		case Data::Data_2 : std::cout << "Loaded Data 2" << '\n';
		break;

		default : break;
	}

	std::cin.get();
}