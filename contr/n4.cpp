#include "HEADER_ns.h"

void n4(){
    cout << "----\n\n";
    cout << "N4\n";

    cout << "Enter N, then N free seats\n";
    int N;
    cin >> N;

    int a[9]{};

    for (int i = 0; i < N; i++){
        int p;
        cin >> p;

        int index;
        if (p <= 36)
            index = (p-1) / 4;
        else
            index = 8 - (p-37) / 2;

        if (a[index] != 6) {
            a[index]++;
        }
    }

    for(int i : a)
        cout << i << " ";
    cout << endl;

    int row = 0;
    int maxim = 0;

    for (int i : a) {
        if (i == 6) {
            row++;
            if (row > maxim)
                maxim = row;
        } else
            row = 0;
    }

    cout << "Answer: " << maxim << endl;

    cout << "\n----\n\n";
}