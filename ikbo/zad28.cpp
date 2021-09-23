#include <iostream>
#include "zads.h"
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void zad_obrabotka_tekstovyh_files_n32() {
    cout << "------------------------------------------------------\n";
    cout << "Task 28 BEGIN\n\n";

    cout << "\'\'\' This program prints encrypted text\n"
            "from file \"test.txt\" \'\'\'\n";

    string filename("../ikbo/test.txt");

    cout << "\nTask 28 OUTPUT: \n";

    // CAESAR encryption shift
    int SHIFT = 10;

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN] " << "(shift = " << SHIFT << ")\n";

        string s;
        SHIFT = SHIFT % 26;

        while (!fin.eof()) {
            getline(fin, s);

            for (char i: s) {
                if ('A' <= i and i <= 'Z')
                    cout << (char)((int(i) + SHIFT > 'Z') ?
                            (i + SHIFT - 26) : (i + SHIFT));
                else if ('a' <= i and i <= 'z')
                    cout << (char)((int(i) + SHIFT > 'z') ?
                              (i + SHIFT - 26) : (i + SHIFT));
                else
                    cout << i;
            }

            if (fin.eof())
                cout << "\n[FILE END]\n";
            else {
                cout << endl;
            }
        }

    }
    fin.close();

    cout << "\nTask 28 END\n";
    cout << "------------------------------------------------------\n\n";
}
