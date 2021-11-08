#include "HEADER_zads.h"
#include <ctime>

long long generator(long long m, long long i, long long c) {
    if (i == 0)
        return 0;
    return (m * generator(m, i - 1, c) + i) % c;
}

void zad_generator_psevdosluchayinyh_chisel() {
    cout << "------------------------------------------------------\n";
    cout << "Task 22 BEGIN\n\n";

    cout << "\'\'\' This program generates pseudorandom numbers \'\'\'\n";
    cout << "\nTask 22 OUTPUT:\n\n";

    // var 1

    long long m1 = 37;
    long long i1 = 3;
    long long c1 = 64;

    cout << "Var 1 number = " << generator(m1, i1, c1) << endl;

    // var 2

    long long m2 = 25173;
    long long i2 = 13849;
    long long c2 = 65537;

    cout << "Var 2 number = " << generator(m2, i2, c2) << endl;

    // var 3

    long long m3 = std::time(nullptr) % m2;
    long long i3 = std::time(nullptr) % i2;
    long long c3 = std::time(nullptr) % c2;

    cout << "Var 3 number = " << generator(m3, i3, c3) << endl;

    cout << "\nTask 22 END\n";
    cout << "------------------------------------------------------\n\n";
}
