#include <iostream>

int main()
{
	int example[5];
	int* ptr = example;

	for (int i = 0; i < 4; i++)
	{
		example[i] = 9;
	}

	std::cout << *(ptr + 2);

	std::cin.get();
}