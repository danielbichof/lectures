
#include <iostream>
#include <string>
#include "commons.h"

class Entity
{
private:
	std::string m_Name;
	int m_Age;

public:
	explicit Entity(const std::string &name) : m_Name(name), m_Age(-1) {}
	Entity(int age) : m_Name("Unknown"), m_Age(age) {}
	const string &GetName() const { return m_Name; }
};

void print(const Entity &entity) { std::cout << entity.GetName() << std::endl; }

int main()
{
	std::string name = "Daniel Bichof";
	auto *entity = new Entity(name);
	print(*entity);
	delete entity;

	Entity a("Bob");
	print(a);
}
