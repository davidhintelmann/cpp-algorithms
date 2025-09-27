# C++ Algorithms from Introduction to Algorithms (CLRS)

This repository contains C++ implementations of algorithms and data structures from the classic textbook Introduction to Algorithms by Cormen, Leiserson, Rivest, and Stein (CLRS).

There are two goals for this repo:
1. Provide clear, well-documented implementations for learners.
2. Showcase C++ programming and algorithmic problem-solving skills.

## Repository Structure

```
cpp-algorithms/
│── README.md
│── LICENSE
│── .gitignore
│── CMakeLists.txt
│
├── docs/                    # Explanations, notes, and complexity analysis
│   ├── 02-getting-started.md
│   ├── 06-heapsort.md
│   └── ...
│
├── include/                 # Reusable headers
│   └── algorithms/
│       ├── sorting.hpp
│       ├── graph.hpp
│       └── dp.hpp
│
├── src/                     # Algorithm implementations
│   ├── sorting/
│   │   ├── insertion_sort.cpp
│   │   ├── quicksort.cpp
│   │   └── heapsort.cpp
│   ├── data_structures/
│   │   ├── linked_list.cpp
│   │   └── red_black_tree.cpp
│   ├── graphs/
│   │   ├── bfs.cpp
│   │   ├── dfs.cpp
│   │   └── dijkstra.cpp
│   └── ...
│
└── tests/                   # Unit tests
    ├── test_sorting.cpp
    ├── test_graphs.cpp
    └── ...
```

## Compilation & Usage

Prerequisites
- C++ compiler (GCC, Clang, MSVC)
  - C++17 or later
- CMake (optional, for easier builds)

### Compile a Single File (using g++)

```bash
g++ -std=c++20 -O2 src/sorting/insertion_sort.cpp -o insertion_sort
./insertion_sort
```

### Build with CMake

```bash
mkdir build && cd build
cmake ..
make
```

## Algorithms Implemented
1. Foundations
   - [x] Insertion Sort
   - [ ] Merge Sort
   - [ ] Analyzing Algorithms
2. Sorting & Order Statistics
   - [ ] Heapsort
   - [ ] Quicksort
   - [ ] Counting Sort
   - [ ] Radix Sort
   - [ ] Bucket Sort
3. Data Structures
   - [ ] Linked List
   - [ ] Binary Search Tree
   - [ ] Red-Black Tree
   - [ ] Hash Table
4. Graph Algorithms
   - [ ] BFS (Breadth-First Search)
   - [ ] DFS (Depth-First Search)
   - [ ] Dijkstra’s Algorithm
   - [ ] Kruskal’s Algorithm
   - [ ] Prim’s Algorithm
  
*More algorithms will be added progressively — see Roadmap*

## Documentation

Each algorithm includes:
- Source code in src/
- Explanation in docs/
- Complexity analysis
- Example usage in test cases

Example documentation:
1. [docs\01-introduction.md](docs\01-introduction.md)
2. [docs\02-getting-started.md](docs\02-getting-started.md)

## Roadmap
- [ ] Complete all major Sorting algorithms
- [ ] Implement Dynamic Programming problems (Rod Cutting, LCS, Matrix Chain Multiplication)
- [ ] Implement Graph Algorithms (MSTs, Shortest Paths, Max Flow)
- [ ] Add Number Theory algorithms (GCD, Modular Arithmetic, RSA)
- [ ] Expand Advanced Data Structures (Red-Black Trees, B-Trees, Disjoint Sets)
- [ ] Add Unit Tests with GoogleTest / Catch2
- [ ] Provide Visualizations for key algorithms (via external tools or diagrams in `docs/`)

## Contributing

Contributions are welcome!
- Open issues for bugs or suggestions
- Fork the repo & submit PRs with improvements
- Follow consistent coding style (C++20, clang-format recommended)

## License

This project is licensed under the MIT License — see [LICENSE](./LICENSE)

## Acknowledgments
- Introduction to Algorithms (CLRS), 4th Edition
  - Thomas H. Cormen
  - Charles E. Leiserson
  - Ronald L. Rivest
  - Clifford Stein
- Open-source algorithm communities for inspiration