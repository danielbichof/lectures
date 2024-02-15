
#include <iostream>

#include "commons.h"
#include "log.h"

class Entity
{
public:
	Entity() : x_(0), y_(0) {}

	float x_, y_;
	void Move(float xa, float ya)
	{
		x_ += xa;
		y_ += ya;
	}
	void Print()
	{
		std::cout << x_ << " " << y_ << std::endl;
	}
};

class Player : public Entity
{
public:
	Player(string s) : name(s) {}
	string name;
};

int main()
{
	Player player("Daniel");
	player.Move(21.2, 120.2);
	player.Print();
}
