#include <iostream>

extern int s_Variable= 2;

void Function()
{

}
int main()
{
	Function();
	std::cout << s_Variable;
}