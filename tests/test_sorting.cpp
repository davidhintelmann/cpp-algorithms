#include <gtest/gtest.h>
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <string>
#include <set>
#include <map>
#include <span>
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
    merge_sort(arr, 0, arr.size()-1);
    EXPECT_TRUE(arr.empty());
}

TEST(SortingTest, AlreadySorted_MS) {
    std::vector<int> arr    = {1, 2, 3, 4, 5};
    std::vector<int> before = arr;
    merge_sort(arr, 0, arr.size()-1);
    EXPECT_EQ(arr, before);
}

TEST(SortingTest, ReverseSorted_MS) {
    std::vector<int> arr    = {5, 4, 3, 2, 1};
    std::vector<int> expect = {1, 2, 3, 4, 5};
    merge_sort(arr, 0, arr.size()-1);
    EXPECT_EQ(arr, expect);
}

// Modern insertion sort
TEST(SortingTest, ModernInsertionSort) {run_sort_test([](std::vector<int>& arr) {insertion_sort_template(arr.begin(), arr.end());});}

TEST(SortingTest, EmptyVector_MIS) {
    std::vector<int> arr;
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_TRUE(arr.empty());
}

TEST(SortingTest, AlreadySorted_MIS) {
    std::vector<int> arr    = {1, 2, 3, 4, 5};
    std::vector<int> before = arr;
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, before);
}

TEST(SortingTest, ReverseSorted_MIS) {
    std::vector<int> arr    = {5, 4, 3, 2, 1};
    std::vector<int> expect = {1, 2, 3, 4, 5};
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, expect);
}

TEST(SortingTest, ReverseSorted_MIS_array) {
    std::array<int, 5> arr    = {5, 4, 3, 2, 1};
    std::array<int, 5> expect = {1, 2, 3, 4, 5};
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, expect);
}

TEST(SortingTest, ReverseSorted_MIS_list) {
    std::list<int> arr    = {5, 4, 3, 2, 1};
    std::list<int> expect = {1, 2, 3, 4, 5};
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, expect);
}

TEST(SortingTest, ReverseSorted_MIS_deque) {
    std::deque<int> arr    = {5, 4, 3, 2, 1};
    std::deque<int> expect = {1, 2, 3, 4, 5};
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, expect);
}

TEST(SortingTest, ReverseSorted_MIS_string) {
    std::string arr    = "edcba";
    std::string expect = "abcde";
    insertion_sort_template(arr.begin(), arr.end());
    EXPECT_EQ(arr, expect);
}

// need to use C++20
// TEST(SortingTest, ReverseSorted_MIS_span) {
//     int raw[] = {5, 4, 3, 2, 1};
//     std::span<int> arr(raw);
//     int expected_raw[] = {1, 2, 3, 4, 5};
//     std::span<int> expect(expected_raw);
//     insertion_sort_template(arr.begin(), arr.end());
//     EXPECT_TRUE(std::equal(arr.begin(), arr.end(), expect.begin()));
// }

// TEST(SortingTest, QuickSort) {
//     run_sort_test([](std::vector<int>& arr) {
//         quicksort(arr, 0, arr.size() - 1);  // assumes quicksort with indices
//     });
// }
