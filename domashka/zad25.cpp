#include "HEADER_zads.h"

long long gcd_delemniyem(long long a, long long b){
    if (b == 0)
        return a;
    return gcd_delemniyem(b, a % b);
}

long long gcd_vychetaniyem(long long a, long long b){
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a >= b)
        return gcd_vychetaniyem(b, a - b);
    return gcd_vychetaniyem(a, b - a);
}

void zad_algorritm_evklida(){
    cout << "------------------------------------------------------\n";
    cout << "Task 25 BEGIN\n\n";

    cout << "\'\'\' This program finds "
            "the greatest common divisor of two integers A, B \'\'\'\n";

    long long a, b;
    while (true){
        cout << "\n[1st number A input]\n";
        number_validator(a);

        cout << "\n[2nd number B input]\n";
        number_validator(b);

        cout << "A = " << a << "; B = " << b << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 25 OUTPUT: \n";

    long long ans1 = gcd_vychetaniyem(a, b);
    cout << "Metod 'vychetaniye' answer: gcd = " << ans1 << endl;

    long long ans2 = gcd_delemniyem(a, b);
    cout << "Metod 'deleniye' answer: gcd = " << ans2 << endl;

    cout << "\nTask 25 END\n";
    cout << "------------------------------------------------------\n\n";
}
