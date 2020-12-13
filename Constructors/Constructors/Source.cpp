#include <iostream>

class Entity
{
public:
	float X, Y;
	
	Entity(float x, float y)
	{
		X = x;
		Y = y;
	};

	void Print()
	{
		std::cout << X << "," << Y;
	}
};

int main()
{
	Entity e(10.0f, 5.0f);
	e.Print();

}