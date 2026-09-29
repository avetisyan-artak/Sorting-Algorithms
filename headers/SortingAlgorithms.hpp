#ifndef __SORTING_ALGORITHMS_HPP__
#define __SORTING_ALGORITHMS_HPP__

#include <algorithm>

template <typename T>
void BubbleSort(T array[], const int size);

template <typename T>
void SelectionSort(T array[], const int size);

template <typename T>
void InsertionSort(T array[], const int size);

template <typename T>
void MergeSort(T array[], const int left, const int right);
template <typename T>
void Merge(T array[], const int left, const int middle, const int right);

template <typename T>
void QuickSort(T array[], const int left, const int right);
template <typename T>
int Partition(T array[], const int left, const int right);

template <typename T>
void HeapSort(T array[], const int size);
template <typename T>
void Heapify(T array[], const int size, const int index);

#include "../templates/SortingAlgorithms.cpp"

#endif /// __SORTING_ALGORITHMS_HPP__

