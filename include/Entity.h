#pragma once
#include "commons.h"

class Printable
{
public:
	virtual string GetClassName() = 0;
};

class Entity : public Printable
{
public:
	virtual string GetName() { return "entity"; }
	string GetClassName() override { return "entity"; }
};