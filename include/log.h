#pragma once
#include <iostream>

#include "commons.h"

class Logger
{
public:
	void error(string message);
	void warn(string message);
	void info(string message);

private:
	static int counter_log_;

	enum level
	{
		a,
		b,
		c
	};
};
