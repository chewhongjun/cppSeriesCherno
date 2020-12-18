#include <iostream>

// String is an array of characters
// string const char*

int main()
{
	const char* str = "Hong Jun"; // const because strings are immutable, ends with null termination character

	char str2[5] = { 'h','o','n','g',0 };

	std::cout << str2;
}
