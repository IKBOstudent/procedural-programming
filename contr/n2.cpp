#include "HEADER_ns.h"

void n2(){
    cout << "----\n\n";
    cout << "N2\n";

    long long M;

    cout << "\nEnter M:\n";
    cin >> M;

    long long N3, N4;

    N4 = M % 3;
    N3 = (M - 4 * N4) / 3;

    if (N3 < 0) {
        N3 = 0;
        N4 = 0;
    }

    cout << "Answer:\n" << N3 << " [3 blades]\n" << N4 << " [4 blades]\n";

    cout << "\n----\n\n";
}