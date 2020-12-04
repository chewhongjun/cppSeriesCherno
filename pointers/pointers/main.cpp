/* raw pointers
* pointers: pointer is an integer that store memory address
* eg: [0x123112]
* The pointer is a thing that stores the memory address
* pointer points to memory
* When you deference with * symbol you can access the value at the memory address
*/

#include <iostream>

int Source();

int main()
{
	Source();
	// find out the memory address of var
	int var = 8;
	int* varPtr = &var;
	
	//dereference
	*varPtr = 200000;
	std::cout << *varPtr << std::endl;
	
	// void pointer
	void* ptr = 0; // or null | nullptr
	return 0;
}

