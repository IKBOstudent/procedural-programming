#include <iostream>
#include "zads.h"

using namespace std;

void zad_poryadok(){
    cout << "--------------------------------\n";
    cout << "начало задания 9\n\n";
    cout << "эта программа выводит 10 натуральных чисел, начиная с N\n";

    int n;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод N]\n";
        n = int_type_input();

        if (n <= 0) {
            cout << "введите натуральное n!\n";
            continue;
        }

        cout << "Вы ввели N = " << n << endl;

        if (yes_no_input()) {
            vvod = false;
        }
    }

    cout << "\nвывод задания 9: \n";

    for (int i = n; i < n + 10; ++i) {
        cout << i;
        (i == n + 9) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nконец задания 9\n";
    cout << "--------------------------------\n\n";
}
