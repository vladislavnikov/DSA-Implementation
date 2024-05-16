#include <iostream>
#include "Algorithms.h"

using namespace std;

const int ARRAY_SIZE = 5;

int main()
{
	int arrBubble[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrInsertion[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrSelection[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };
	int arrMerge[ARRAY_SIZE] = { 7, 12, 9, 11, 5 };

	Algorithms::bubbleSort(arrBubble, ARRAY_SIZE);
	Algorithms::print(arrBubble, ARRAY_SIZE);

	Algorithms::insertionSort(arrInsertion, ARRAY_SIZE);
	Algorithms::print(arrInsertion, ARRAY_SIZE);

	Algorithms::selectionSort(arrSelection, ARRAY_SIZE);
	Algorithms::print(arrSelection, ARRAY_SIZE);

	Algorithms::mergeSort(arrMerge, 0, ARRAY_SIZE - 1);
	Algorithms::print(arrMerge, ARRAY_SIZE);

	return 0;
}
