#ifndef SORTINGALGORITHMS_H
#define SORTINGALGORITHMS_H

namespace SortingAlgorithms {
    int* bubbleSort(int* arr, int size);
    int* insertionSort(int* arr, int size);
    int* selectionSort(int* arr, int size);
    int* mergeSort(int* arr, int left, int right);
    void merge(int* arr, int left, int mid, int right);
    void print(int* arr, int size);
}

#endif
