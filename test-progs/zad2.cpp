#include <iostream>
#include "zads.h"

using namespace std;

void zad_ariphmetica(){
    cout.precision(12);
    cout << "--------------------------------\n";

#ifdef RUS
    cout << "начало задания 2\n\n";

    cout << "эта программа выводит сумму, разность,\n";
    cout << "произведение и частное введенных чисел\n";

    long double a, b;
    bool vvod = true;

    while (vvod){
        cout << "\n[ввод первого числа]\n";
        a = double_type_input();

        cout << "\n[ввод второго числа]\n";
        b = double_type_input();

        cout << "a = " << a << "; b = " << b << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double sum, raz, prod;

    sum = a + b;
    raz = a - b;

    prod = a * b;
    if (prod == 0)
        prod = 0;

    cout << "\nвывод задания 2:\n\n";

    cout << "сумма = " << sum << endl;
    cout << "разность = " << raz << endl;
    cout << "произведение = " << prod << endl;

    if (b != 0){
        long double div = a / b;
        cout << "частное = " << div << endl;
    } else
        cout << "деление выполнить нельзя\n";

    cout << "\nконец задния 2\n";
#else
    cout << "Task 2 BEGIN\n\n";

    cout << "This program prints: sum, difference,\n";
    cout << "product and quotient of 2 numbers\n";

    long double a, b;
    bool vvod = true;

    while (vvod){
        cout << "\n[1st number input]\n";
        a = double_type_input();

        cout << "\n[2nd number input]\n";
        b = double_type_input();

        cout << "a = " << a << "; b = " << b << endl;

        if (yes_no_input())
            vvod = false;
    }

    long double sum, raz, prod;

    sum = a + b;
    raz = a - b;

    prod = a * b;
    if (prod == 0)
        prod = 0;

    cout << "\nTask 2 OUTPUT: \n\n";

    cout << "Sum = " << sum << endl;
    cout << "Difference = " << raz << endl;
    cout << "Product = " << prod << endl;

    if (b != 0){
        long double div = a / b;
        cout << "Quotient = " << div << endl;
    } else
        cout << "Zero division is forbidden\n";

    cout << "\nTask 2 END\n";
#endif

    cout << "--------------------------------\n\n";
}
