#include <iostream>

class Entity
{
	public:
		float X, Y;

		void Move(float xa, float xb)
		{
			X += xa;
			Y += xb;
		}
};


class Player : public Entity
{
public:
	const char* Name;

	void printName()
	{
		std::cout << Name << "\n";
	}
};

int main()
{
	Player player;
	player.Move(5, 5);

	std::cout << sizeof(Entity) << "\n";
	std::cout << sizeof(Player) << "\n";
}