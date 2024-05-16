#include "Algorithms.h"
#include <cstdlib>
#include <iostream>

using namespace std;

namespace Algorithms {

    void print(int* arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int* bubbleSort(int* arr, int size)
    {
        int temp = 0;

        for (int i = 0; i < size - 1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < size - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }

        return arr;
    }

    int* insertionSort(int* arr, int size)
    {
        for (int i = 1; i < size; i++)
        {
            int temp = arr[i];
            int index = i;
            while (index > 0 && arr[index - 1] > temp)
            {
                arr[index] = arr[index - 1];
                --index;
            }
            arr[index] = temp;
        }

        return arr;
    }

    int* selectionSort(int* arr, int size)
    {
        for (int i = 0; i < size; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < size; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }

            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        return arr;
    }

    void merge(int* arr, int left, int mid, int right)
    {
        int n1 = mid - left + 1;
        int n2 = right - mid;

        int* L = (int*)malloc(n1 * sizeof(int));
        int* R = (int*)malloc(n2 * sizeof(int));

        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2)
        {
            if (L[i] <= R[j])
            {
                arr[k] = L[i];
                i++;
            }
            else
            {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }

        while (j < n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }

        free(L);
        free(R);
    }

    int* mergeSort(int* arr, int left, int right)
    {
        if (left < right)
        {
            int mid = left + (right - left) / 2;

            mergeSort(arr, left, mid);
            mergeSort(arr, mid + 1, right);

            merge(arr, left, mid, right);
        }

        return arr;
    }
}
