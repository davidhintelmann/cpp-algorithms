# Chapter 2 — sorting

This chapter introduces simple algorithms, their analysis, and the process of designing them.

## 2.1 Insertion Sort

See this repo's [cpp implementation](../src/sorting/insertion_sort.cpp)

- A simple, intuitive sorting algorithm.
- Works the way people often sort playing cards:
  - Start with the second card.
  - Insert it into its correct position relative to the first.
  - Continue until all cards are sorted.

### Pseudocode (CLRS style)

```
INSERTION-SORT(A)
for j = 2 to A.length
key = A[j]
i = j - 1
while i > 0 and A[i] > key
A[i + 1] = A[i]
i = i - 1
A[i + 1] = key
```

### Time Complexity
- Best case: **O(n)** (already sorted)
- Worst case: **O(n²)**
- Average case: **O(n²)**
- Space: **O(1)** (in-place)

## 2.2 Analyzing Algorithms

- **Running time** depends on input size `n`.
- We estimate the number of *primitive operations* (comparisons, assignments).
- Use **asymptotic analysis** (Big-O, Θ, Ω) to compare growth rates.

## 2.3 Designing Algorithms

- Key strategies include:
  - **Divide and Conquer**
  - **Dynamic Programming**
  - **Greedy Methods**
- These form the foundation for the rest of this repo and computer science algorithms in general.

## Key Takeaways

- Insertion Sort is easy to implement and efficient for small arrays.
- Algorithm analysis allows fair comparison independent of hardware.
- Early chapters build the foundation for advanced algorithm design.