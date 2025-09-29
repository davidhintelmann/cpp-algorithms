/*
 * Bubble Sort
 * 
 * Time Complexity:
 *   - Best: O(n) [already sorted]
 *   - Worst: O(n^2)
 *   - Average: O(n^2)
 *
 * Space Complexity: O(1)
 */

#include <vector>
#include <algorithm>
#include "algorithms/sorting.hpp"

void bubble_sort(std::vector<int>& input) {
    for (std::size_t i = input.size(); i > 1; i--) {
        bool swapped = false;
        for (std::size_t j = 0; j < i-1; j++) {
            if (input[j] > input[j+1]) {
                std::swap(input[j], input[j+1]);
                swapped = true;
            }
        }
        
        if (!swapped) break;
    }
}