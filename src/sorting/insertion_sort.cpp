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
#include "algorithms/sorting.hpp"

void insertion_sort(std::vector<int>& input) {
    for (size_t i = 1; i < input.size(); i++) {
        int key = input[i];
        int j = i-1;
        while (j >= 0 && input[j] > key) {
            input[j+1] = input[j];
            j--;
        }
        input[j+1] = key;
    }
}
