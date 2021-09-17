#include <iostream>
#include <cmath>

using namespace std;

void zad_zayem()(){
	cout.precision(10);
    cout << "--------------------------------\n";
    cout << "Task 11 BEGIN\n\n";
    cout << "This program print monthly loan fee\n";
    cout << "m = (S*r(1 + r)^n)/(12*((1+r)^n -1))\n";

    long double s, p;
    long long n;
    while (true) {
        cout << "\n[S input (rubles)]\n";
        s = double_type_input();

        cout << "\n[n input (years)]\n";
        n = int_type_input();

        cout << "\n[p input (percents)]\n";
        p = double_type_input();

        if (p >= 10000){
          cout << "Invalid percentage!\n";
          cout << "Enter parameters again...\n";
          continue;
        }

        if (s <= 0 or n <= 0 or m <= 0){
            cout << "Invalid parameters!\n";
            cout << "Enter parameters again...\n";
            continue;
        }

        cout << "S = " << s << "; n = " << n << "; p = " << m << endl;

        if (!yes_no_input())
            break;
    }

    long double r, pow_p, answer;
    r = p / 100;
    pow_p = powl(1 + r, n);
    answer = (s * r * pow_p) / (12 * (pow_p - 1));

    cout << "\nTask 11 OUTPUT: \n";

    printf("monthly loan fee = %.10Lf rubles\n", answer);

    cout << "\nTask 11 END\n";
    cout << "--------------------------------\n\n";
}
