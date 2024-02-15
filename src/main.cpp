
#include <iostream>

#include "commons.h"
#include "log.h"

class Entity
{
protected:
	int X, Y;

public:
	Entity()
	{
		X = 0;
		Y = 0;
	}
	void Print()
	{
		std::cout << X << " " << Y << std::endl;
	}
};

class Player : public Entity
{
public:
	Player()
	{
		X = 1;
	}
};

int main()
{
	Player p;
	p.Print();
}
