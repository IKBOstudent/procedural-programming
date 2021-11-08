#include "HEADER_zads.h"

bool yes_no_input(){
    cout << "Type [y] to continue; OR "
            "Type [n] to enter again\n";

    string y_n;
    getline(cin, y_n);

    while (y_n != "y" and y_n != "n") {
        cout << "Invalid input!\n";
        cout << "Type [y] to continue; OR "
                "Type [n] to enter again\n";
        getline(cin, y_n);
    }

    return y_n == "y";
}