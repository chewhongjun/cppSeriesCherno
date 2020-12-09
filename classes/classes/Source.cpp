#include <iostream>

class Player
{
public:
	int x, y;
	int speed;

	void move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};



int main()
{
	Player p1;
	p1.speed = 5;
	p1.x = 1;
	p1.y = 1;

	p1.move(1, 1);


	std::cout << p1.x;
}