//
// Created by Ethan Shapiro on 10/14/22.
//

#include "InsertionSort.h"

void InsertionSort::sort(int *arr, int arrLen) {
    for (int i = 1; i < arrLen; i++) {
        int currItem = arr[i];
        int hole = i;
        while (hole > 0 && arr[hole-1] > currItem) {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = currItem;
    }
}
