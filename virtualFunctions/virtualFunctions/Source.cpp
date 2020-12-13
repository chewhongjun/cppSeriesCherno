#include <iostream>

class Entity
{
public:
	virtual std::string getName() { return "Entity"; }
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string& name)
		:m_Name(name) {}

	std::string getName() { return m_Name; }
};

void printName(Entity* entity)
{
	std::cout << entity->getName()<<"\n";
}

int main()
{
	Entity* e = new Entity;
	printName(e);

	Player* p = new Player("Cherno");
	printName(p);

	std::cin.get();
	
}