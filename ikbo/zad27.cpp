#include <iostream>
#include "zads.h"
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void zad_obrabotka_tekstovyh_files_n8() {
    cout << "------------------------------------------------------\n";
    cout << "Task 27 BEGIN\n\n";

    cout << "\'\'\' This program prints a chain of ASCII codes\n"
            "of characters in file \"test.txt\" \'\'\'\n";

    string filename("../ikbo/test.txt");

    cout << "\nTask 27 OUTPUT: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN]\n";

        int counter = 1;
        string s;

        while (!fin.eof()) {
            getline(fin, s);

            for (char i: s) {
                cout << (int) i << " - ";
                counter++;
                if (counter % 8 == 0)
                    cout << endl;
            }

            if (fin.eof())
                cout << 0 << "\n[FILE END]\n";
            else {
                cout << 10 << " - ";
                counter++;
            }
        }

    }
    fin.close();

    cout << "\nTask 27 END\n";
    cout << "------------------------------------------------------\n\n";
}
