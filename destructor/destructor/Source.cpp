#include <iostream>

class Entity
{
public:
	int X, Y;

	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		Y = 0.0f;
		std::cout << "Constructed"<<"\n";
	}

	~Entity()
	{
		std::cout << "Destructed" << "\n";
	}
	
	Entity(int x, int y)
	{
		X = x;
		Y = y;
	};

	void Print()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();
}