#include "GLFW/glfw3.h"

#include "commons.h"

template <typename T, const int N>
class Array
{
public:
	const int size() const { return N; }

private:
	T m_Array[N];
};

int main()
{
	Array<int, 20> a = Array<int, 20>();
	std::cout << a.size() << std::endl;
}
