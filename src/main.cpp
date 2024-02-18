
#include "commons.h"

class Entity
{
public:
	int x;
	Entity() {}
	Entity(int x) : x(x) {}
	~Entity()
	{
		std::cout << "Destroyed Entity " << x << std::endl;
	}

	void print() { std::cout << x << std::endl; }
};

void PrintEntity(std::unique_ptr<Entity> &entity)
{
	entity->print();
}

int main()
{
	{
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> entity_shared = std::make_shared<Entity>();
			e0 = entity_shared;
			std::unique_ptr<Entity> e_unique = std::make_unique<Entity>(10);
			PrintEntity(e_unique);
		}
	}
}
