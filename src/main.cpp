#include "GLFW/glfw3.h"

#include "commons.h"
#include "log.h"
class log
{
public:
	template <typename T>
	static void println(T stream)
	{
		std::cout << stream << std::endl;
	}
};

int main()
{
	Logger logger;
	auto name = "daniel";
	auto a = 2.34;
	auto x = 90;
	logger.info(name);
	logger.info(a);
	logger.info(x);
}
