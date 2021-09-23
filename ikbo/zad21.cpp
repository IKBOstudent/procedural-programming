#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;
const long long MAX_INT = 2147483647;

void zad_automatnyi_rasposnovatel() {
    cout << "------------------------------------------------------\n";
    cout << "Task 21 BEGIN\n\n";

    cout << "\'\'\' This program converts roman number to integer \'\'\'\n";

    cout << "\nEnter a roman number using { I, V, X, L, C, D, M }\n";

    const string ROMAN = "IVXLCDM";

    string s;
    while (true) {
        getline(cin, s);

        bool bad_string = false;

        if (s.length() == 0)
            bad_string = true;

        for (char i: s) {
            bool ok_char = false;
            for (char j: ROMAN) {
                if (i == j)
                    ok_char = true;
            }
            if (!ok_char) {
                cout << "Your input has not ROMAN symbols.\n"
                        "Enter again!\n";
                bad_string = true;
                break;
            }
        }

        if (!bad_string)
            break;

    }


    cout << "\nTask 21 OUTPUT: \n";



    cout << "\nTask 21 END\n";
    cout << "------------------------------------------------------\n\n";
}
