#include <iostream>
#include <string>

class Entity
{
//private:
protected:
	int X, Y;
public:
	Entity()
	{
		X = 0;
		Y = 0;
	}
};

class Player : public Entity
{
public:
	Player()
	{
		X = 1;
	}
	void Print()
	{
		std::cout << X;
	}
};

int main()
{
	Player* p = new Player;
	p->Print();
}