
#include <iostream>
#include <string>
#include "commons.h"

class Entity
{
private:
	std::string m_Name;
	int m_points;

public:
	Entity() : m_Name("Unknown"), m_points(0)
	{
	}

	Entity(const std::string &name) : m_Name(name), m_points(0)
	{
	}

	const std::string &GetName() const { return m_Name; }
};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;
	Entity e1("Daniel");
	std::cout << e1.GetName() << std::endl;
}
