#include <gtest/gtest.h>
#include <vector>
#include <algorithm>

// Include your sorting headers
#include "algorithms/sorting.hpp"  // adjust path if needed

// ---------- Helper function ----------
template <typename SortFunc>
void run_sort_test(SortFunc sort_function) {
    std::vector<int> input    = {5, 2, 9, 1, 5, 6};
    std::vector<int> expected = {1, 2, 5, 5, 6, 9};

    sort_function(input);

    EXPECT_EQ(input, expected);
}

// ---------- Tests Input/Output ----------
// Bubble Sort
TEST(SortingTest, BubbleSort) {run_sort_test([](std::vector<int>& arr) {bubble_sort(arr);});}

TEST(SortingTest, EmptyVector_BS) {
    std::vector<int> arr;
    bubble_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(SortingTest, AlreadySorted_BS) {
    std::vector<int> arr    = {1, 2, 3, 4, 5};
    std::vector<int> before = arr;
    bubble_sort(arr);
    EXPECT_EQ(arr, before);
}

TEST(SortingTest, ReverseSorted_BS) {
    std::vector<int> arr    = {5, 4, 3, 2, 1};
    std::vector<int> expect = {1, 2, 3, 4, 5};
    bubble_sort(arr);
    EXPECT_EQ(arr, expect);
}
// Insertion Sort
TEST(SortingTest, InsertionSort) {run_sort_test([](std::vector<int>& arr) {insertion_sort(arr);});}

TEST(SortingTest, EmptyVector_IS) {
    std::vector<int> arr;
    insertion_sort(arr);
    EXPECT_TRUE(arr.empty());
}

TEST(SortingTest, AlreadySorted_IS) {
    std::vector<int> arr    = {1, 2, 3, 4, 5};
    std::vector<int> before = arr;
    insertion_sort(arr);
    EXPECT_EQ(arr, before);
}

TEST(SortingTest, ReverseSorted_IS) {
    std::vector<int> arr    = {5, 4, 3, 2, 1};
    std::vector<int> expect = {1, 2, 3, 4, 5};
    insertion_sort(arr);
    EXPECT_EQ(arr, expect);
}

// Merge Sort
TEST(SortingTest, MergeSort) {run_sort_test([](std::vector<int>& arr) {merge_sort(arr, 0, arr.size()-1);});}

TEST(SortingTest, EmptyVector_MS) {
    std::vector<int> arr;
    merge_sort(arr, 0 , arr.size());
    EXPECT_TRUE(arr.empty());
}

TEST(SortingTest, AlreadySorted_MS) {
    std::vector<int> arr    = {1, 2, 3, 4, 5};
    std::vector<int> before = arr;
    merge_sort(arr, 0 , arr.size());
    EXPECT_EQ(arr, before);
}

TEST(SortingTest, ReverseSorted_MS) {
    std::vector<int> arr    = {5, 4, 3, 2, 1};
    std::vector<int> expect = {1, 2, 3, 4, 5};
    merge_sort(arr, 0 , arr.size());
    EXPECT_EQ(arr, expect);
}

// TEST(SortingTest, QuickSort) {
//     run_sort_test([](std::vector<int>& arr) {
//         quicksort(arr, 0, arr.size() - 1);  // assumes quicksort with indices
//     });
// }
