#include <iostream>
#include "zads.h"
#include <fstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;

void zad_copy_file(){
    cout << "------------------------------------------------------\n";
    cout << "Task 13 BEGIN\n\n";

    cout << "\'\'\' This program print the content of "
            "file \"test.txt\" \'\'\'\n";

    string filename("../ikbo/test.txt");

    cout << "\nTask 13 OUTPUT: \n";

    ifstream fin(filename);
    if (!fin.is_open())
        cout << "Unable to open '" << filename << "'" << endl;
    else {
        cout << "\n[FILE BEGIN]\n";
        while (!fin.eof()){
            string s;
            getline(fin, s);
            cout << s;
            if (!fin.eof())
                cout << endl;
            else
                cout << "\n[FILE END]\n";
        }
    }
    fin.close();

    cout << "\nTask 13 END\n";
    cout << "------------------------------------------------------\n\n";
}
