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
        cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
        string y_n;
        cin >> y_n;
        while (y_n != "y" and y_n != "n") {
            cout << "ввод некорректный!\n";
            cout << "чтобы продолжить введите [y]; чтобы повторить ввод введите [n]" << endl;
            cin >> y_n;
        }
        if (y_n == "y") {
            vvod = false;
        }
    }

    cout << "\nвывод задания 9: \n";

    for (int i = n; i < n + 10; ++i) {
        cout << i;
        (i == n + 9) ? cout << "." : cout << ", ";
    }

    cout << "\n\nконец задания 9\n";
    cout << "--------------------------------\n\n";
}
