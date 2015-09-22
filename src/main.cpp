#include <iostream>
#include <vector>
#include <iterator>
#include <array>
#include <string>
#include "heapsort.h"

int main()
{
	auto v = std::vector<int>{5, 13, 2, 25, 7, 17, 20, 8, 4};
	heapSort(v);
	std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	auto a = std::array<int, 10>{1, 2, 3, 4, 7, 8, 9, 10, 14, 16};
	heapSort(a);
	std::copy(a.cbegin(), a.cend(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	auto b = std::array<std::string, 4>{"Lorem", "ipsum", "dolorem", "psu"};
	heapSort(b);
	std::copy(b.cbegin(), b.cend(), std::ostream_iterator<std::string>(std::cout, " "));
	std::cout << std::endl;
	return 0;
}
