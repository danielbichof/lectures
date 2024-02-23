#include <iostream>
#include <chrono>
#include <thread>
#include <array>
#include <iomanip>

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

void print(int count)
{
	std::cout
		<< std::setw(2) << std::setfill('0') << count << " ";
}

int main()
{
	Timer timer;
	int grid = 5;
	int *array = new int[grid * grid];

	for (int y = 0; y < grid; y++)
	{
		for (int x = 0; x < grid; x++)
		{
			array[x + y * grid] = x + y;
		}
	}
	for (int y = 0; y < grid; y++)
	{
		for (int x = 0; x < grid; x++)
		{
			print(array[x + y * grid]);
		}
		std::cout << std::endl;
	}
	delete[] array;
}
