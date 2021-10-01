#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;

long long factorial(int x){
     long long res = 1;
     for (int i = 2; i <= x; i++)
         res *= i;

     return res;
}

long long pow_k(int x, int k){
    int res = 1;
    while (k > 0){
        if (k % 2 == 1)
            res *= x;

        x *= x;
        k /= 2;
    }

    return res;
}

void zad_ryady_n7(){
    cout << "------------------------------------------------------\n";
    cout << "Task 29 BEGIN\n\n";

    cout << "\'\'\' This program  \'\'\'\n";
    cout << "\nTask 29 OUTPUT:\n";

    int x = 5;

    long double summa = 0;
    long double prev_summa = 0;
    for (int k = 0; k <= 15; k++){
        long double formula = (long double)(factorial(x + k))/(pow_k(3, k) * (3*k + 2));
        summa += formula;

        cout << formula << endl;
    }

    cout << summa << endl;

    cout << "\nTask 29 END\n";
    cout << "------------------------------------------------------\n\n";
}

