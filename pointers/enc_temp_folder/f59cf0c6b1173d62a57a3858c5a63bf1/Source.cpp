#include <iostream>

int Source()
{
	char* ptr = new char[8];
	memset(ptr, 7, 9);

	std::cin.get();
	return 0;
}