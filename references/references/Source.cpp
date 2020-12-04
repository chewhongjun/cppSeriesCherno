/* References &
* references are an extension of the previous topics pointers
* references are a reference to a variable
*/

#include <iostream>

void IncrementPtr(int* value)
{
	(*value)++;
}
void IncrementRef(int& value)
{
	value++;
}

int main()
{
	int a = 5;
	int b = 7;
	//int* b = &a;

	// this is a reference
	// note the join with type (ALIAS)
	// int& ref = a;
	// ref = 20;
	IncrementPtr(&a);
	IncrementRef(b);

	std::cout << a<< "\n";
	std::cout << b;
}