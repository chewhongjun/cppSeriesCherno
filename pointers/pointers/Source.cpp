#include <iostream>

int Source()
{
	char* buffer = new char[8];
	memset(buffer, 7, 8);

	delete[] buffer;

	std::cin.get();
	return 0;
}