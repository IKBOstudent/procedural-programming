#include <iostream>
#include <cctype>
#include "zads.h"

using std::cout;
using std::endl;
using std::cin;
const long long MAX_INT = 2147483647;

void zad_sortirovka_bukv(){
    cout << "------------------------------------------------------\n";
    cout << "Task 15 BEGIN\n\n";

    cout << "\'\'\' This program prints sorted array of characters \'\'\'\n";

    cout << "\nEnter a chain of 10 !ENGLISH! characters\n";

    int length = 10;
    char a[length];

    bool bad;
    while (true) {
        bad = false;
        for (int i = 0; i < length; ++i){
            cin >> a[i];
            if (65 <= a[i] and a[i] <= 90)
                a[i] = (char)(a[i] + 32);
            else if (!(97 <= a[i] and a[i] <= 122)) {
                cout << "Oh, you typed not an english character! "
                        "Enter again\n";
                bad = true;
                cin.ignore(MAX_INT, '\n');
                break;
            }
        }

        if (!bad)
            break;
    }

    cin.ignore(MAX_INT, '\n');
    cout << "\nIf you typed more than 10 characters\n"
            "the odd will be deleted!\n";

    // array sort
    for (int i = 0; i < length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if ((int)a[i] > (int)a[j]){
                char tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    cout << "\nTask 15 OUTPUT: \n";

    // array print
    for (int i = 0; i < length; ++i){
        cout << a[i];
        (i == length-1) ? cout << "\n" : cout << ", ";
    }

    cout << "\n\nTask 15 END\n";
    cout << "------------------------------------------------------\n\n";
}
