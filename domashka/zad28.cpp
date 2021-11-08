#include "HEADER_zads.h"
#include <fstream>

using std::ifstream;

void zad_obrabotka_tekstovyh_files_n32() {
    cout << "------------------------------------------------------\n";
    cout << "Task 28 BEGIN\n\n";

    cout << "\'\'\' This program prints encrypted text\n"
            "from file \"test.txt\" \'\'\'\n";

    cout << "\nSHIFT value input\n";

    // CAESAR encryption shift
    int SHIFT;
    number_validator(SHIFT);

    if (SHIFT < 0)
        SHIFT = 26 + SHIFT;

    SHIFT = SHIFT % 26;

    string filename("../domashka/txt_files/test.txt");
    cout << "\nTask 28 OUTPUT: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN] " << "(shift = " << SHIFT << ")\n";

        string s;

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
