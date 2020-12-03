
/*How to debug
* 1) Breakpoint (Step into, step out, continue)
*
*/

#include <iostream>
#include "Log.h"

void main()
{
	int a = 8;
	a++;



	const char* string = "debugging";
	for (int i = 0; i < strlen(string)  ; i++)
	{
		std::cout << string[i] << std::endl;
	}


	Log("hello how to debug");
	std::cin.get();

}