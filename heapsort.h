#ifndef HEAPSORT_H_
#define HEAPSORT_H_

template<typename Container>
void heapSort(Container& c)
{
	auto heapSize = c.size();
	auto maxHeapify = [&c, &heapSize](auto i) {
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

#endif // HEAPSORT_H_
