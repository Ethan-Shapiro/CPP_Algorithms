//
// Created by Ethan Shapiro on 10/16/22.
//

#include "MergeSort.h"

void MergeSort::sort(int *arr, int start, int end) {
    // base case
    if ((end-start) <= 1)
        return;

    // We split the array in half
    int middle = start + (end-start) / 2;

    // merge sort left and ride sides
    sort(arr, start, middle);
    sort(arr, middle, end);

    // merge our sides back together
    merge(arr, start, middle, end);
}

void MergeSort::merge(int *arr, int left, int mid, int right) {
    int leftLen = mid-left;
    int rightLen = right-mid;

    int *tempLeft = new int[leftLen];
    int *tempRight = new int[rightLen];

    // copy items from left to mid
    for (int i = 0; i < leftLen; i++) {
        tempLeft[i] = arr[left + i];
    }

    // copy items from middle to right
    for (int i = 0; i < rightLen; i++) {
        tempRight[i] = arr[mid + i];
    }

    // merge the items in order
    int leftIndex = 0;
    int rightIndex = 0;
    int arrCurrent = left;
    while (leftIndex < leftLen && rightIndex < rightLen) {
        if (tempLeft[leftIndex] < tempRight[rightIndex]) {
            arr[arrCurrent] = tempLeft[leftIndex];
            leftIndex++;
        } else {
            arr[arrCurrent] = tempRight[rightIndex];
            rightIndex++;
        }
        arrCurrent++;
    }

    while (leftIndex < leftLen) {
        arr[arrCurrent] = tempLeft[leftIndex];
        arrCurrent++;
        leftIndex++;
    }

    while (rightIndex < rightLen) {
        arr[arrCurrent] = tempRight[rightIndex];
        arrCurrent++;
        rightIndex++;
    }

    delete[] tempLeft;
    delete[] tempRight;
}
