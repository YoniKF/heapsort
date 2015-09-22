#include <iostream>
#include <vector>
#include <iterator>
#include <array>
#include <string>

template<typename Container>
void heapSort(Container& c)
{
	auto heapSize = c.size();
	auto maxHeapify = [&c, &heapSize](std::size_t i) {
		auto largest = i;
		do {
			std::swap(c[i], c[largest]);
			i = largest;
			auto l = 2 * i + 1, r = l + 1;
			if (l < heapSize && c[l] > c[largest]) {
				largest = l;
			}
			if (r < heapSize && c[r] > c[largest]) {
				largest = r;
			}
		} while (largest != i);
	};
	for (auto i = c.size() / 2; i-- > 0;) {
		maxHeapify(i);
	}
	for (; heapSize-- > 1;) {
		std::swap(c[0], c[heapSize]);
		maxHeapify(0);
	}
}

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
