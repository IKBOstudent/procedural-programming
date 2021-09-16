#include <iostream>
#include "zads.h"

using namespace std;

void zad_poryadok(){
    cout << "--------------------------------\n";
#ifdef RUS
    cout << "начало задания 9\n\n";
    cout << "эта программа выводит 10 натуральных чисел, начиная с N\n";

    long long n;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод N]\n";
        n = int_type_input();

        if (n <= 0) {
            cout << "введите натуральное n!\n";
            continue;
        }

        cout << "Вы ввели N = " << n << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nвывод задания 9: \n";

    for (long long i = n; i < n + 10; ++i) {
        cout << i;
        (i == n + 9) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nконец задания 9\n";
#else
    cout << "Task 9 BEGIN\n\n";
    cout << "This program prints "
            "10 numbers starting with N\n";

    long long n;
    bool vvod = true;

    while (vvod){
        cout << "\n[N input]\n";
        n = int_type_input();

        if (n <= 0) {
            cout << "Enter natural N!\n";
            continue;
        }

        cout << "N = " << n << endl;

        if (yes_no_input())
            vvod = false;
    }

    cout << "\nTask 9 OUTPUT: \n";

    for (long long i = n; i < n + 10; ++i) {
        cout << i;
        (i == n + 9) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nTask 9 END\n";
#endif
    cout << "--------------------------------\n\n";
}
