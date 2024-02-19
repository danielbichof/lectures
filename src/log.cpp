#include "log.h"

int Logger::counter_log_ = 0;

void Logger::error(std::string message)
{
	counter_log_++;
	std::cout << "[" << counter_log_ << "] " << message << std::endl;
}

void Logger::warn(std::string message)
{
	counter_log_++;
	std::cout << "[" << counter_log_ << "] " << message << std::endl;
}

// template <typename T>
// void Logger::info(T message)
// {
// 	counter_log_++;
// 	std::cout << "[" << counter_log_ << "] " << message << std::endl;
// }