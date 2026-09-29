#include <gtest/gtest.h>
#include "headers/SortingAlgorithms.hpp"

TEST(SortingAlgorithmsTest, BubbleSort)
{
    int array[] = {5, 2, 8, 1, 3};

    BubbleSort(array, 5);

    int expected[] = {1, 2, 3, 5, 8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, BubbleSortAlreadySorted)
{
    int array[] = {1, 2, 3, 4, 5};

    BubbleSort(array, 5);

    int expected[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, BubbleSortReverse)
{
    int array[] = {5, 4, 3, 2, 1};

    BubbleSort(array, 5);

    int expected[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, BubbleSortDuplicates)
{
    int array[] = {4, 2, 4, 1, 2, 1};

    BubbleSort(array, 6);

    int expected[] = {1, 1, 2, 2, 4, 4};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, SelectionSort)
{
    int array[] = {100, 3, 0, 1, 5};

    SelectionSort(array, 5);

    int expected[] = {0, 1, 3, 5, 100};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, SelectionSortReverse)
{
    int array[] = {9, 8, 7, 6, 5, 4};

    SelectionSort(array, 6);

    int expected[] = {4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, SelectionSortDuplicates)
{
    int array[] = {5, 3, 5, 2, 3, 1};

    SelectionSort(array, 6);

    int expected[] = {1, 2, 3, 3, 5, 5};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, InsertionSort)
{
    int array[] = {10, 9, 8, 1, 3};

    InsertionSort(array, 5);

    int expected[] = {1, 3, 8, 9, 10};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, InsertionSortAlreadySorted)
{
    int array[] = {1, 2, 3, 4, 5};

    InsertionSort(array, 5);

    int expected[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, InsertionSortReverse)
{
    int array[] = {5, 4, 3, 2, 1};

    InsertionSort(array, 5);

    int expected[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, InsertionSortNegative)
{
    int array[] = {-1, -5, 3, -2, 0};

    InsertionSort(array, 5);

    int expected[] = {-5, -2, -1, 0, 3};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, MergeSort)
{
    int array[] = {102, 29, 8, 12, 50};

    MergeSort(array, 0, 4);

    int expected[] = {8, 12, 29, 50, 102};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, MergeSortReverse)
{
    int array[] = {9, 8, 7, 6, 5, 4, 3};

    MergeSort(array, 0, 6);

    int expected[] = {3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 7; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, MergeSortDuplicates)
{
    int array[] = {4, 2, 4, 1, 2, 1};

    MergeSort(array, 0, 5);

    int expected[] = {1, 1, 2, 2, 4, 4};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, MergeSortNegative)
{
    int array[] = {-10, 5, -3, 2, -1};

    MergeSort(array, 0, 4);

    int expected[] = {-10, -3, -1, 2, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, QuickSort)
{
    int array[] = {102, 29, 8, 12, 50};

    QuickSort(array, 0, 4);

    int expected[] = {8, 12, 29, 50, 102};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, QuickSortReverse)
{
    int array[] = {9, 8, 7, 6, 5, 4, 3};

    QuickSort(array, 0, 6);

    int expected[] = {3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 7; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, QuickSortDuplicates)
{
    int array[] = {4, 2, 4, 1, 2, 1};

    QuickSort(array, 0, 5);

    int expected[] = {1, 1, 2, 2, 4, 4};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, QuickSortNegative)
{
    int array[] = {-1, 5, -10, 3, -2};

    QuickSort(array, 0, 4);

    int expected[] = {-10, -2, -1, 3, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, HeapSort)
{
    int array[] = {102, 29, 8, 12, 50};

    HeapSort(array, 5);

    int expected[] = {8, 12, 29, 50, 102};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, HeapSortReverse)
{
    int array[] = {9, 8, 7, 6, 5, 4, 3};

    HeapSort(array, 7);

    int expected[] = {3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < 7; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, HeapSortDuplicates)
{
    int array[] = {4, 2, 4, 1, 2, 1};

    HeapSort(array, 6);

    int expected[] = {1, 1, 2, 2, 4, 4};

    for (int i = 0; i < 6; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, HeapSortNegative)
{
    int array[] = {-1, 5, -10, 3, -2};

    HeapSort(array, 5);

    int expected[] = {-10, -2, -1, 3, 5};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, SingleElement)
{
    int array1[] = {42};
    BubbleSort(array1, 1);
    EXPECT_EQ(array1[0], 42);

    int array2[] = {42};
    SelectionSort(array2, 1);
    EXPECT_EQ(array2[0], 42);

    int array3[] = {42};
    InsertionSort(array3, 1);
    EXPECT_EQ(array3[0], 42);

    int array4[] = {42};
    MergeSort(array4, 0, 0);
    EXPECT_EQ(array4[0], 42);

    int array5[] = {42};
    QuickSort(array5, 0, 0);
    EXPECT_EQ(array5[0], 42);

    int array6[] = {42};
    HeapSort(array6, 1);
    EXPECT_EQ(array6[0], 42);
}

TEST(SortingAlgorithmsTest, TwoElements)
{
    int array1[] = {2, 1};
    BubbleSort(array1, 2);
    EXPECT_EQ(array1[0], 1);
    EXPECT_EQ(array1[1], 2);

    int array2[] = {2, 1};
    SelectionSort(array2, 2);
    EXPECT_EQ(array2[0], 1);
    EXPECT_EQ(array2[1], 2);

    int array3[] = {2, 1};
    InsertionSort(array3, 2);
    EXPECT_EQ(array3[0], 1);
    EXPECT_EQ(array3[1], 2);

    int array4[] = {2, 1};
    MergeSort(array4, 0, 1);
    EXPECT_EQ(array4[0], 1);
    EXPECT_EQ(array4[1], 2);

    int array5[] = {2, 1};
    QuickSort(array5, 0, 1);
    EXPECT_EQ(array5[0], 1);
    EXPECT_EQ(array5[1], 2);

    int array6[] = {2, 1};
    HeapSort(array6, 2);
    EXPECT_EQ(array6[0], 1);
    EXPECT_EQ(array6[1], 2);
}

TEST(SortingAlgorithmsTest, AllEqual)
{
    int array1[] = {7, 7, 7, 7};
    BubbleSort(array1, 4);

    int array2[] = {7, 7, 7, 7};
    SelectionSort(array2, 4);

    int array3[] = {7, 7, 7, 7};
    InsertionSort(array3, 4);

    int array4[] = {7, 7, 7, 7};
    MergeSort(array4, 0, 3);

    int array5[] = {7, 7, 7, 7};
    QuickSort(array5, 0, 3);

    int array6[] = {7, 7, 7, 7};
    HeapSort(array6, 4);

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(array1[i], 7);
        EXPECT_EQ(array2[i], 7);
        EXPECT_EQ(array3[i], 7);
        EXPECT_EQ(array4[i], 7);
        EXPECT_EQ(array5[i], 7);
        EXPECT_EQ(array6[i], 7);
    }
}

TEST(SortingAlgorithmsTest, BubbleSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    BubbleSort(array, 5);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, SelectionSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    SelectionSort(array, 5);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, InsertionSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    InsertionSort(array, 5);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, MergeSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    MergeSort(array, 0, 4);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, QuickSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    QuickSort(array, 0, 4);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

TEST(SortingAlgorithmsTest, HeapSortDouble)
{
    double array[] = {5.5, 2.2, 8.8, 1.1, 3.3};

    HeapSort(array, 5);

    double expected[] = {1.1, 2.2, 3.3, 5.5, 8.8};

    for (int i = 0; i < 5; ++i) {
        EXPECT_EQ(array[i], expected[i]);
    }
}

int
main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

