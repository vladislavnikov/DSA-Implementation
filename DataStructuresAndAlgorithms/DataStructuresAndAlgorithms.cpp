#include <iostream>
#include "SortingAlgorithms.h"
#include "SearchingAlgorithms.h"

using namespace std;

const int ARRAY_SIZE = 5;

int main()
{
	int arrBubble[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrInsertion[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrSelection[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrMerge[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };

	SortingAlgorithms::bubbleSort(arrBubble, ARRAY_SIZE);
	SortingAlgorithms::print(arrBubble, ARRAY_SIZE);

	SortingAlgorithms::insertionSort(arrInsertion, ARRAY_SIZE);
	SortingAlgorithms::print(arrInsertion, ARRAY_SIZE);

	SortingAlgorithms::selectionSort(arrSelection, ARRAY_SIZE);
	SortingAlgorithms::print(arrSelection, ARRAY_SIZE);

	SortingAlgorithms::mergeSort(arrMerge, 0, ARRAY_SIZE - 1);
	SortingAlgorithms::print(arrMerge, ARRAY_SIZE);

	int sortedArr[] = { 3, 7, 9, 11, 12 };

	SearchingAlgorithms::binarySearch(sortedArr, ARRAY_SIZE, 9);

	int arr[] = { 7, 12, 9, 11, 3 };

	SearchingAlgorithms::linearSearch(arr, ARRAY_SIZE, 3);

	return 0;
}
