#include "HEADER_zads.h"

void zad_uravneniye(){
    cout.precision(24);
    cout << "------------------------------------------------------\n";
    cout << "Task 3 BEGIN\n\n";

    cout << "\'\'\' This program prints the root of "
            "bx + c = 0 equation \'\'\'\n";

    long double answer, b, c;
    while (true){
        cout << "\n[coefficient b input]\n";
        number_validator(b);

        cout << "\n[coefficient c input]\n";
        number_validator(c);

        cout << "b = " << b << "; c = " << c << endl;
        if (yes_no_input())
            break;
    }

    cout << "\nTask 3 OUTPUT: \n\n";

    if (b != 0.0){
        answer = - c / b;
        if (answer == 0)
            answer = 0;

        cout << "x = " << answer << endl;
    } else
        cout << "no roots" << endl;

    cout << "\nTask 3 END\n";
    cout << "------------------------------------------------------\n\n";
}
