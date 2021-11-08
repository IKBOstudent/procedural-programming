#include "HEADER_ns.h"

void n5(){
    cout << "----\n\n";
    cout << "N5\n";

    cout << "\nEnter N, K:\n";

    int N, K;
    cin >> N >> K;

    while (K > 1) {
        N = (N - K % 2) / 2;
        K /= 2;
    }

    cout << "Answer:\n" << (N-1) / 2 << endl
    << N/2 << endl;

    cout << "\n----\n\n";
}