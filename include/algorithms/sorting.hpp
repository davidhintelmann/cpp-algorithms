#ifndef CPP_ALGORITHMS_SORTING_HPP
#define CPP_ALGORITHMS_SORTING_HPP

#include <vector>
#include <algorithm>
#include <iterator>

void bubble_sort(std::vector<int>& input);
void insertion_sort(std::vector<int>& input);
void merge_sort(std::vector<int>& input, size_t p, size_t r);

template <typename Iterator>
void insertion_sort_template(Iterator start, Iterator end) {
    if (start == end) return;
	for (Iterator i = std::next(start); i != end; ++i) {
		auto key = *i;
		Iterator j = i;
		while ( j != start && *std::prev(j) > key) {
			*j = *std::prev(j);
			--j;
		}
		*j = key;
	}
}

#endif