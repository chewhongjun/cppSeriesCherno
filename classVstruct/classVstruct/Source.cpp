/*Classes vs Structs
* Class is private by default
* Struct is public by default
*/

#include <iostream>

struct Player
{
	int health;
	int level;

	void changeHp(int x)
	{
		health -= x;
	}
};

int main()
{
	Player p1;
	p1.health = 100;
	p1.level = 10;

	p1.changeHp(50);

	std::cout << p1.health;
}