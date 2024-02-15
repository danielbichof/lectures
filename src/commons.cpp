
#include "commons.h"

string input(string text)
{
	std::string ss;
	std::cout << text;
	if (std::cin >> ss)
		return ss;
	return "";
}
