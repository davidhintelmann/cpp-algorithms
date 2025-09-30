#ifndef CPP_ALGORITHMS_SORTING_HPP
#define CPP_ALGORITHMS_SORTING_HPP

#include <vector>
#include <algorithm>

void bubble_sort(std::vector<int>& input);
void insertion_sort(std::vector<int>& input);
void merge_sort(std::vector<int>& input, size_t p, size_t r);

#endif