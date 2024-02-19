#pragma once
#include <iostream>

#include "commons.h"
typedef std::string string;

class Logger
{
public:
	void error(string message);
	void warn(string message);
	template <typename T>
	void info(T message) { std::cout << "[" << counter_log_ << "] [INFO] " << message << std::endl; }

private:
	static int counter_log_;

	enum level
	{
		a,
		b,
		c
	};
};
