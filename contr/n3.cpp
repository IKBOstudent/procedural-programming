#include "HEADER_ns.h"

void n3(){
    cout << "----\n\n";
    cout << "N3\n";

    cout << "\nEnter N, M:\n";

    long long N, M;
    cin >> N >> M;

    cout << "Answer: " << (N * (N + 1) / 2) * (M * (M + 1) / 2);

    cout << "\n----\n\n";
}