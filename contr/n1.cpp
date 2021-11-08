#include "HEADER_ns.h"

void n1(){
    cout << "----\n\n";
    cout << "N1\n";

    cout << "\nEnter A, B, C:\n";

    long long A, B, C;
    cin >> A >> B >> C;

    long long N = (C - A)/B;

    cout << "Answer: " << N;

    cout << "\n----\n\n";
}
