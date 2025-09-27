# Chapter 1 — introduction

This chapter introduces the concept of **algorithms** and their role in computer science.

## 1.1 Algorithms

**Definition:** 

    - A finite sequence of well-defined instructions that takes input, performs computation, and produces output.
    - Algorithms are not tied to a specific programming language — they describe *steps*, not implementation.
    - Example: Sorting a list of numbers.

### Example: Insertion into an Array (High-Level)
1. Start at the end of the array.
2. Shift elements until the correct position for the new element is found.
3. Insert the element.

## 1.2 Algorithms as a Technology

- Algorithms are as important as hardware in improving performance.
- **Moore’s Law** improves hardware speed, but **algorithmic improvements** often yield greater gains.
- Example:
  - Sorting `n = 1,000,000` numbers:
    - Insertion Sort (`O(n^2)`) → ~10^12 steps
    - Merge Sort (`O(n log n)`) → ~20 × 10^6 steps

## Key Takeaways

- Algorithms are essential for solving computational problems efficiently.
- Efficiency is measured in terms of **time** and **space**.
- As input sizes grow, choosing the right algorithm often matters *more than hardware improvements*.
