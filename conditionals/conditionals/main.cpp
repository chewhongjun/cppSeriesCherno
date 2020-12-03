// check pointer is null
#include <iostream>

int main()
{
	const char* ptr = "Hello";
	if (ptr)
	{
		std::cout << ptr << std::endl;
	}
	//else if
	else
	{
		std::cout << "Null" << std::endl;
	}
	std::cin.get();
}