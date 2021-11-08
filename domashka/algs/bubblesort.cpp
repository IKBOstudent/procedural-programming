#include <iostream>
#include <vector>
#include "../HEADER_zads.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

template <typename T>
void swap(T& x, T& y) {
    T tmp = x;
    x = y;
    y = tmp;
}

//template <typename T>
void bubble_sort(char* A, int len){
    int right_side = len - 1;

    for (int i = 0; i < len - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < right_side; ++j)
            if (A[j] > A[j+1]) {
                swap(A[j], A[j+1]);
                swapped = true;
            }

        if (!swapped)
            break;

        right_side--;
    }
}

template <typename T>
void shaker_sort(T* A, int len){
    int left_side = 0;
    int right_side = len - 1;

    while (left_side < right_side) {
        bool swapped = false;
        for (int j = left_side; j < right_side; ++j)
            if (A[j] > A[j+1]) {
                swap(A[j], A[j + 1]);
                swapped = true;
            }

        if (!swapped)
            break;
        swapped = false;

        right_side--;

        for (int j = right_side; j > left_side; --j)
            if (A[j] < A[j-1]) {
                swap(A[j], A[j - 1]);
                swapped = true;
            }

        if (!swapped)
            break;

        left_side++;
    }
}