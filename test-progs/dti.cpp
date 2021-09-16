#include <iostream>
#include "zads.h"
#include <limits>

using namespace std;

// long double type input validation
long double double_type_input(){
#ifdef RUS
    cout << "Введите число\n";
#else
    cout << "Enter your number\n";
#endif

    long double num;
    char a;
    bool bad;

    while (true){
        cin >> num;
        cin.clear();

        cin.get(a);
        if (a == '\n')
            break;

        bad = false;
        while(a != '\n'){
            if (a != ' ') {  // everything but [space] is bad
#ifdef RUS
                cout << "ввод некорректный! "
                        "Введите число заново:\n";
#else
                cout << "Invalid input! "
                        "Enter your number again\n";
#endif
                bad = true;
                cin.ignore(std::numeric_limits<int>::max(), '\n');
                break;
            }
            cin.get(a);
        }
        if (!bad) {
            break;
        }
    }

    return num;
}

// int type input validation
long long int_type_input(){
#ifdef RUS
    cout << "Введите число\n";
#else
    cout << "Enter your number\n";
#endif

    long long num;
    char a;
    bool bad;

    while (true){
        cin >> num;
        cin.clear();

        cin.get(a);
        if (a == '\n')
            break;

        bad = false;
        while(a != '\n'){
            if (a != ' ') {  // everything but [space] is bad
#ifdef RUS
                cout << "ввод некорректный! "
                        "Введите число заново:\n";
#else
                cout << "Invalid input! "
                        "Enter your number again\n";
#endif
                bad = true;
                cin.ignore(std::numeric_limits<int>::max(), '\n');
                break;
            }
            cin.get(a);
        }
        if (!bad) {
            break;
        }
    }

    return num;
}

// y or n input validation
bool yes_no_input(){

#ifdef RUS
    cout << "чтобы продолжить введите [y]; "
            "чтобы повторить ввод введите [n]\n";
#else
    cout << "Type [y] to continue; OR "
            "Type [n] to enter again\n";
#endif

    string y_n;
    getline(cin, y_n);

    while (y_n != "y" and y_n != "n") {
#ifdef RUS
        cout << "ввод некорректный!\n";
        cout << "чтобы продолжить введите [y]; "
            "чтобы повторить ввод введите [n]\n";
#else
        cout << "Invalid input!\n";
        cout << "Type [y] to continue; OR "
                "Type [n] to enter again\n";
#endif
        getline(cin, y_n);
    }

    return y_n == "y";
}
