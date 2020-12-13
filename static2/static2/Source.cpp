#include <iostream>

struct Entity
{
	static int x, y;

	void Print()
	{
		std::cout << x << "," << y << std::endl;
	}
};

int Entity::x;
int Entity::x;

int main()
{
	Entity e;
	Entity::x = 1;
	Entity::x = 2;

	Entity e2;
	Entity::x = 5;
	Entity::x = 8;

	e.Print();
	e2.Print();
	/*Entity e;
	e.x = 1;
	e.y = 2;

	Entity e1 = { 5,8 };

	e.Print();
	e1.Print();*/
	
}