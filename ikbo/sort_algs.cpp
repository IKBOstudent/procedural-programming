#include <iostream>
#include <vector>
#include "zads.h"

using std::cout;
using std::endl;
using std::string;
using std::vector;

void swap(long long& x, long long& y){
    long long tmp = x;
    x = y;
    y = tmp;
}

void swap(char& x, char& y){
    char tmp = x;
    x = y;
    y = tmp;
}

void integer_bubble_sort(long long * A, int len){
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

void integer_shaker_sort(long long * A, int len){
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

void char_bubble_sort(char * A, int len){
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

void char_shaker_sort(char * A, int len){
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