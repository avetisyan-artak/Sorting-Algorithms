#ifndef __SORTING_ALGORITHMS_CPP__
#define __SORTING_ALGORITHMS_CPP__
#include "headers/SortingAlgorithms.hpp"

template <typename T>
void
BubbleSort(T array[], const int size)
{
    const int newSize = size - 1;

    for (int i = 0; i < newSize; ++i) {
        for (int j = 0; j < newSize - i; ++j) {
            if (array[j] > array[j + 1]) {
                std::swap(array[j], array[j + 1]);
            }
        }
    }
}

template <typename T>
void
SelectionSort(T array[], const int size)
{
    const int newSize = size - 1;

    for (int i = 0; i < newSize; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(array[i], array[minIndex]);
    }
}

template <typename T>
void
InsertionSort(T array[], const int size)
{
    for (int i = 1; i < size; ++i) {
        T key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            --j;
        }

        array[j + 1] = key;
    }
}

template <typename T>
void
MergeSort(T array[], const int left, const int right)
{
    if (left >= right) {
        return;
    }

    const int middle = left + (right - left) / 2;

    MergeSort(array, left, middle);
    MergeSort(array, middle + 1, right);
    Merge(array, left, middle, right);
}

template <typename T>
void
Merge(T array[], const int left, const int middle, const int right)
{
    T* temp = new T[right - left + 1];

    int i = left;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= right) {
        if (array[i] < array[j]) {
            temp[k] = array[i];
            ++i;
        } else {
            temp[k] = array[j];
            ++j;
        }

        ++k;
    }

    while (i <= middle) {
        temp[k] = array[i];
        ++i;
        ++k;
    }

    while (j <= right) {
        temp[k] = array[j];
        ++j;
        ++k;
    }

    for (int index = 0; index < k; ++index) {
        array[left + index] = temp[index];
    }

    delete[] temp;
}

template <typename T>
void
QuickSort(T array[], const int left, const int right)
{
    if (left >= right) {
        return;
    }

    const int pivotIndex = Partition(array, left, right);

    QuickSort(array, left, pivotIndex - 1);
    QuickSort(array, pivotIndex + 1, right);
}

template <typename T>
int
Partition(T array[], const int left, const int right)
{
    const T pivot = array[right];
    int i = left - 1;

    for (int j = left; j < right; ++j) {
        if (array[j] < pivot) {
            ++i;
            std::swap(array[i], array[j]);
        }
    }

    std::swap(array[i + 1], array[right]);

    return i + 1;
}

template <typename T>
void
HeapSort(T array[], const int size)
{
    for (int i = size / 2 - 1; i >= 0; --i) {
        Heapify(array, size, i);
    }

    for (int i = size - 1; i > 0; --i) {
        std::swap(array[0], array[i]);
        Heapify(array, i, 0);
    }
}

template <typename T>
void
Heapify(T array[], const int size, const int index)
{
    int largest = index;

    const int left = 2 * index + 1;
    const int right = 2 * index + 2;

    if (left < size && array[left] > array[largest]) {
        largest = left;
    }

    if (right < size && array[right] > array[largest]) {
        largest = right;
    }

    if (largest != index) {
        std::swap(array[index], array[largest]);
        Heapify(array, size, largest);
    }
}

#endif /// __SORTING_ALGORITHMS_CPP__

