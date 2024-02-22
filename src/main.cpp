#include <iostream>
#include <chrono>
#include <thread>

#include "commons.h"
#include "log.h"

struct Timer
{
	std::chrono::time_point<std::chrono::system_clock> start;
	std::chrono::time_point<std::chrono::system_clock> end;
	std::chrono::duration<float> duration;

	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}
	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << ms << " ms" << std::endl;
	}
};

class log
{
public:
	template <typename T>
	static void info(T stream)
	{
		std::cout << stream << std::endl;
	}
};

void foo()
{
	Timer timer;
	for (int i = 0; i < 10; i++)
		log::info("Daniel");
}

int main()
{
	foo();
}
