#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;

void zad_ariphmetica(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 2 BEGIN\n\n";

    cout << "\'\'\' This program prints: sum, difference,\n";
    cout << "product and quotient of 2 numbers \'\'\'\n";

    long double a, b;
    while (true){
        cout << "\n[1st number input]\n";
        a = double_type_input();

        cout << "\n[2nd number input]\n";
        b = double_type_input();

        cout << "a = " << a << "; b = " << b << endl;
        if (yes_no_input())
            break;
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
    cout << "------------------------------------------------------\n\n";
}
