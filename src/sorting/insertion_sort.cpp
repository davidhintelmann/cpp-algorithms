/*
 * Insertion Sort
 * CLRS - Chapter 2.1
 * 
 * Time Complexity:
 *   - Best: O(n) [already sorted]
 *   - Worst: O(n^2)
 *   - Average: O(n^2)
 *
 * Space Complexity: O(1)
 */

#include <vector>
#include <iostream>
#include "algorithms/sorting.hpp"

void insertion_sort(std::vector<int>& input) {
    int length = input.size();
    std::cout << "length " << length << std::endl;
    std::cout << "test works" << std::endl;
}