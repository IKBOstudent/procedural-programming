#include "HEADER_zads.h"

void zad_bylaya_slava(){
    cout << "------------------------------------------------------\n";
    cout << "Task 19 BEGIN\n\n";

    cout << "\'\'\' This program draws 1912 USA flag \'\'\'\n";

    cout << "\nTask 19 OUTPUT: \n\n";

    int width = 19;

    for (int row = 0; row < 13; ++row){
        for (int col = 0; col < 8 + width; ++col){
            if (row < 6){
                if (col < 8)
                    cout << "*" << " ";
                else
                    cout << "--";
            } else
                cout << "--";
        }
        cout << endl;
    }

    cout << "\nTask 19 END\n";
    cout << "------------------------------------------------------\n\n";
}
