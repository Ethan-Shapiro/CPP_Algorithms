#include <iostream>
#include "BubbleSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"

int main() {
    int arr[] = {9, 1, 2, 6, 3, 5, 8};
    BubbleSort::sort(arr, 7);
//    for(auto item: arr) {
//        std::cout << item << std::endl;
//    }

//    int arr2[] = {9, 1, 2, 6, 3, 5, 8};
//    InsertionSort::sort(arr2, 7);
//    for(auto item: arr2) {
//        std::cout << item << std::endl;
//    }
    int arr3[] = {9, 1, 2, 6, 3, 5, 8, 10, 15, 20};
    MergeSort mergeSort = MergeSort();
    mergeSort.sort(arr3, 0, 10);
    for(auto item: arr3) {
        std::cout << item << std::endl;
    }
    return 0;
}
