#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;

void zad_resheto_eratosphena() {
    cout << "------------------------------------------------------\n";
    cout << "Task 26 BEGIN\n\n";

    cout << "\'\'\' This program finds "
            "all prime numbers from 2 to N \'\'\'\n";

    long long n;
    while (true) {
        cout << "\n[1st number N input]\n";
        n = int_type_input();

        if (n < 1) {
            cout << "Enter Natural N!\n";
        }

        cout << "N = " << n << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 26 OUTPUT: \n";

    /** is_prime - array of ones **/
    bool *is_prime = new bool[n + 1];

    is_prime[0] = false;
    is_prime[1] = false;

    for (int i = 2; i < n + 1; ++i)
        is_prime[i] = true;

    // filling is_prime array with not prime numbers
    for (int i = 2; i < n + 1; ++i) {
        if (is_prime[i]) {
            for (int j = i; j < n + 1; j += i)
                is_prime[j] = false;
            is_prime[i] = true;
        }
    }

    for (int i = 0; i < n + 1; ++i)
        if (is_prime[i])
            cout << i << endl;

    cout << "\nTask 26 END\n";
    cout << "------------------------------------------------------\n\n";
}
