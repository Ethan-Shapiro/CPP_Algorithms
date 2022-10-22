//
// Created by Ethan on 10/13/2022.
//
#include "BubbleSort.h"


void BubbleSort::sort(int *arr, int arrLen) {
    /*
     * Bubble sort is a basic sorting algorithm but also one of the slowest.
     * Time Complexity: O(n^2)
     * Space Complexity: O(1)
     */
    // Start at the beginning of the array and sort largest to the back
    int sortedStartIndex = arrLen;
    for (int i = 1; i < arrLen; i++) {
        for (int j = 0; j < sortedStartIndex-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        sortedStartIndex--;
    }
}