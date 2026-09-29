#Sorting Algorithms

A C++ implementation of six classic sorting algorithms.

## Algorithms

| Algorithm      |       Best |    Average |      Worst |     Space |
| -------------- | ---------: | ---------: | ---------: | --------: |
| Bubble Sort    |       O(n) |      O(n²) |      O(n²) |      O(1) |
| Selection Sort |      O(n²) |      O(n²) |      O(n²) |      O(1) |
| Insertion Sort |       O(n) |      O(n²) |      O(n²) |      O(1) |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) |      O(n) |
| Quick Sort     | O(n log n) | O(n log n) |      O(n²) | O(log n)* |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) |      O(1) |

* Quick Sort space complexity is O(log n) on average and O(n) in the worst case due to recursion.

## Implemented Algorithms

* **Bubble Sort** — repeatedly swaps adjacent elements that are in the wrong order.
* **Selection Sort** — repeatedly selects the minimum element and places it in its correct position.
* **Insertion Sort** — builds the sorted sequence one element at a time.
* **Merge Sort** — divides the array into smaller parts, sorts them, and merges them.
* **Quick Sort** — partitions the array around a pivot and recursively sorts the parts.
* **Heap Sort** — builds a heap and repeatedly extracts the maximum element.

## Language

* C++03
* GoogleTest

## Structure

Sorting-Algorithms/
├── headers/
│   └── SortingAlgorithms.hpp
├── templates/
│   └── SortingAlgorithms.cpp
├── main_utest.cpp
└── Makefile
```
