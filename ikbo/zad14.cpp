#include <iostream>
#include "zads.h"
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void zad_filtr(){
    cout << "------------------------------------------------------\n";
    cout << "Task 14 BEGIN\n\n";

    cout << "\'\'\' This program prints only digits from\n"
            "file \"test.txt\" \'\'\'\n";

    string filename("../ikbo/test.txt");

    cout << "\nTask 14 OUTPUT: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN]";
        int counter = 0;

        while (!fin.eof()){
            string s;
            getline(fin, s);
            auto len = s.length();

            for (int i = 0; i < len; ++i){
                if (isdigit(s[i])) {
                    if (counter % 12 == 0)
                        cout << endl;
                    cout << s[i] << "; ";
                    counter++;
                }
            }

            if (fin.eof())
                cout << "\n[FILE END]\n";
        }
    }
    fin.close();

    cout << "\nTask 14 END\n";
    cout << "------------------------------------------------------\n\n";
}
