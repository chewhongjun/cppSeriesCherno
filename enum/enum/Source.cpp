/* Enum
*
* 
*/

#include <iostream>

enum class Example {
	A=0, B=1, C=2
};

int main() {
	Example value = Example::B;

	if (value == Example::B) {
		std::cout << "hello";
	}

	std::cin.get();
}