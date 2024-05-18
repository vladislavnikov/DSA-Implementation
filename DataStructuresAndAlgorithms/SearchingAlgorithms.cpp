#include "SearchingAlgorithms.h"
#include <iostream>

using namespace std;

namespace SearchingAlgorithms{

    void linearSearch(int* arr, int size, int searchingValue)
    {
        bool isFound = false;

        for (int i = 0; i < size; i++)
        {
            if (arr[i] == searchingValue)
            {
                cout << "Value at index: " << i << endl;
                isFound = true;
            }
        }

        if (!isFound)
        {
            cout << "Not found!" << endl;
        }
    }

    void binarySearch(int* arr, int size, int searchingValue)
    {
        bool isFound = false;

        int left = 0;
        int right = size - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (arr[mid] == searchingValue)
            {
                cout << "Value at index: " << mid << endl;
                isFound = true;
                break;
            }
            else if (arr[mid] < searchingValue)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (!isFound)
        {
            cout << "Not found!" << endl;
        }
    }

}
