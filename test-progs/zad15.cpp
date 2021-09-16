#include <iostream>
#include "zads.h"
#include <limits>

using namespace std;

void zad_sortirovka_bukv(){
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 15\n\n";
    cout << "эта программа выводит сортированный массив\n";

    int length = 10;
    char a[length];

    cout << "введите последовательность символов\n";

    for (int i = 0; i < length; ++i){
        cin >> a[i];
    }
    cin.ignore(numeric_limits<int>::max(), '\n');

    // сортировка массива
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if ((int)a[i] > (int)a[j]){
                char tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << "\nвывод задания 15: \n";

    // вывод массива
    for (int i = 0; i < length; ++i){
        cout << a[i];
        (i == length-1) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nконец задания 15\n";
#else
    cout << "Task 15 BEGIN\n\n";
    cout << "This program prints sorted array of characters\n";

    int length = 10;
    char a[length];

    cout << "Enter a chain of 10 english characters\n";

    for (int i = 0; i < length; ++i){
        cin >> a[i];
    }
    cin.ignore(numeric_limits<int>::max(), '\n');
    cout << "\nIf you typed more than 10 characters\n"
            "the odd ones will be deleted!\n";

    // array sort
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if ((int)a[i] > (int)a[j]){
                char tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << "\nTask 15 OUTPUT: \n";

    // array print
    for (int i = 0; i < length; ++i){
        cout << a[i];
        (i == length-1) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nTask 15 END\n";
#endif
    cout << "--------------------------------\n\n";
}
