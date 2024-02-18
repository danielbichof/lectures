
#include "commons.h"

std::string input(std::string text)
{
	std::string ss;
	std::cout << text;
	if (std::cin >> ss)
		return ss;
	return "";
}
