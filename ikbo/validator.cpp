#include <iostream>
#include "zads.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

const long long MAX_INT = 2147483647;

// long double type input validation
long double double_type_input(){
    cout << "Enter your number\n";

    long double double_num;
    char a;
    bool bad;

    while (true){
        cin >> double_num;
        cin.clear();

        cin.get(a);

        bad = false;
        while(a != '\n'){
            if (a != ' ') {
                cout << "Invalid input! "
                        "Enter your number again\n";
                bad = true;
                cin.ignore(MAX_INT, '\n');
                break;
            }
            cin.get(a);
        }
        if (!bad)
            break;
    }

    return double_num;
}

// long long int type input validation
long long int_type_input(){
    cout << "Enter an integer\n";

    long long int_num;
    char a;
    bool bad;

    while (true){
        cin >> int_num;
        cin.clear();

        cin.get(a);

        bad = false;
        while(a != '\n'){
            if (a != ' ') {
                cout << "Invalid input! "
                        "Enter your number again\n";
                bad = true;
                cin.ignore(MAX_INT, '\n');
                break;
            }
            cin.get(a);
        }
        if (!bad)
            break;
    }

    return int_num;
}

// continue or not input validation
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
