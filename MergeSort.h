//
// Created by Ethan Shapiro on 10/16/22.
//

#ifndef ALGORITHMS_MERGESORT_H
#define ALGORITHMS_MERGESORT_H
#include <iostream>
using namespace std;


class MergeSort {
public:
    void sort(int arr[], int start, int end);
private:
    void merge(int arr[], int left, int mid, int right);
};


#endif //ALGORITHMS_MERGESORT_H
