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
        cout << "\n[FILE BEGIN]\n";

        while (!fin.eof()){
            string s;
            getline(fin, s);

            int i = 0;

            while (i < s.length()){
                bool start_number = false;
                if (isdigit(s[i])) {
                    start_number = true;

                    bool start = true;
                    while (isdigit(s[i])) {
                        if (s[i] != '0')
                            start = false;
                        if (start) {
                            i++;
                            continue;
                        }
                        cout << s[i];
                        i++;
                    }
                }
                if (start_number){
                    cout << endl;
                }
                i++;
            }

            if (fin.eof())
                cout << "\n[FILE END]\n";
        }
    }
    fin.close();

    cout << "\nTask 14 END\n";
    cout << "------------------------------------------------------\n\n";
}
