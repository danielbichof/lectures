
#include <iostream>

#include "commons.h"
#include "log.h"
#include "Entity.h"

class Player : public Entity
{
public:
	Player(string s) : name(s) {}
	string name;
	string GetName() override { return name; }
	string GetClassName() override { return name; }
};

void PrintName(Entity *obj)
{
	std::cout << obj->GetName() << std::endl;
}

void Print(Printable *obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity *e = new Entity();
	Player *player = new Player("Daniel");

	Print(e);
	Print(player);
}
