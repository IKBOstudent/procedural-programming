#include <iostream>
#include "zads.h"
#include <limits>

using namespace std;

void zad_sortirovka_bukv(){
    cout << "--------------------------------\n";
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

    // вывод массива
    for (int i = 0; i < length; ++i){
        cout << a[i];
        (i == length-1) ? cout << "\n" : cout << ", ";
    }

    cout << "\nвывод задания 15: \n";

    cout << "\n\nконец задания 15\n";
    cout << "--------------------------------\n\n";
}
