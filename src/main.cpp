#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main()
{
	std::vector<int> values = {9, 2, 4, 1, 5, 7, 3};
	std::sort(values.begin(),
			  values.end(),
			  [](int a, int b)
			  {
				  return a < b;
			  });

	for (int value : values)
		std::cout << value << std::endl;
}
