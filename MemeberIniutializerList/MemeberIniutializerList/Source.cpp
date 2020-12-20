#include <iostream>
#include <string>


class Entity
{
private:
	int m_Score;
	std::string m_Name;
public:
	Entity()
		:m_Score(0), m_Name("unknown")
	{
	}

	Entity(const std::string& Name)
		:m_Name(Name)
	{
	}
	const std::string& GetName() const { return m_Name; }
};


int main()
{
	Entity e0;
	std::cout << e0.GetName() << "\n";
	Entity e1("hong");
	std::cout << e1.GetName() << "\n";
}
