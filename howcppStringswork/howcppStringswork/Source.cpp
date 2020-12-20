#include <iostream>
#include <string>
// String is an array of characters
// string const char*

int main()
{
	const char* str = "Hong Jun"; // const because strings are immutable, ends with null termination character

	char str2[5] = { 'h','o','n','g',0 };

	std::cout << str << std::endl;
	std::cout << str2 << std::endl;

	std::string name = "Jay";
	std::cout << name << name.size() << std::endl;

	bool res = name.find("a") != std::string::npos;
	std::cout << res;
}
