#include "HEADER_zads.h"
#include <algorithm>
#include <vector>

using std::vector;

void zad_systems_schislenya(){
    cout << "------------------------------------------------------\n";
    cout << "Task 24 BEGIN\n\n";

    cout << "\'\'\' This program converts a number\n"
            "from the first numeral system to another \'\'\'\n";

    const vector<char> NUMERALS {
            '0', '1', '2', '3', '4',
            '5', '6', '7', '8', '9',
            'a', 'b', 'c', 'd', 'e', 'f'
    };

    const vector<int> NUMERALS_DECIMAL {
            0, 1, 2, 3, 4,
            5, 6, 7, 8, 9,
            10, 11, 12, 13, 14, 15
    };

    int old_s, new_s;
    string number;
    vector<int> int_to_decimal;
    vector<int> float_to_decimal;

    while (true){
        cout << "\n[old numeral system input (<=16)]\n";
        while (true){
            number_validator(old_s);
            if (old_s <= 0 or old_s >= 17){
                cout << "Invalid numeral system\n"
                        "Enter again\n";
                continue;
            }
            break;
        }

        cout << "\n[number input]\n";
        while (true){
            bool bad_input = false;

            cout << "Use { ";
            for (int x = 0; x < old_s; x++)
                cout << NUMERALS[x] << " ";
            cout << "}\n";

            getline(cin, number);

            bool not_int = false;
            for (char c : number){
                if ('A' <= c and c <= 'Z')
                    c = (char)(c + 32);


                bool found = false;
                for (int j = 0; j < old_s; j++)
                    if (NUMERALS[j] == c) {
                        if (!not_int)
                            int_to_decimal.push_back(NUMERALS_DECIMAL[j]);
                        else
                            float_to_decimal.push_back(NUMERALS_DECIMAL[j]);
                        found = true;
                        break;
                    }

                if (c == '.'){
                    if (not_int){
                        cout << "Invalid input\n"
                                "Enter again\n";
                        bad_input = true;
                        int_to_decimal.clear();
                        float_to_decimal.clear();
                        break;
                    }
                    not_int = true;
                    found = true;
                }

                if (!found){
                    cout << "Invalid digit for " << old_s << " numeral system\n"
                                                             "Enter again\n";
                    bad_input = true;
                    int_to_decimal.clear();
                    float_to_decimal.clear();
                    break;
                }
            }
            if (!bad_input)
                break;
        }

        cout << "\n[new numeral system input (<=16)]\n";
        while (true){
            number_validator(new_s);
            if (new_s <= 0 or new_s >= 17){
                cout << "Invalid numeral system\n"
                        "Enter again\n";
                continue;
            }
            break;
        }

        cout << "\nOld ns = " << old_s << "; new ns = " << new_s << endl;
        cout << "Your number = " << number << endl;

        if (yes_no_input())
            break;

    }

    int int_decimal = 0;
    for (int i = 0; i < int_to_decimal.size(); i++) {
        int num = int_to_decimal[i];
        for (int x = 0; x < int_to_decimal.size() - i - 1; x++)
            num *= old_s;
        int_decimal += num;
    }

    double float_decimal = 0;
    for (int i = 0; i < float_to_decimal.size(); i++){
        double num = float_to_decimal[i];
        for (int x = 0; x < i + 1; x++)
            num /= old_s;
        float_decimal += num;
    }

    int precision = 1000000;

    int int_float_decimal = (int)((float_decimal)*precision);

    std::string int_answer;
    while (int_decimal > 0){
        int to_add = int_decimal % new_s;
        for (int j = 0; j < new_s; j++)
            if (NUMERALS_DECIMAL[j] == to_add) {
                int_answer += NUMERALS[j];
                break;
            }
        int_decimal /= new_s;
    }

    std::reverse(int_answer.begin(),  int_answer.end());

    std::string float_answer;
    int i = 1;
    while (int_float_decimal > 0){
        int_float_decimal *= new_s;
        int to_add = int_float_decimal / precision;
        for (int j = 0; j < new_s; j++)
            if (NUMERALS_DECIMAL[j] == to_add) {
                float_answer += NUMERALS[j];
                i *= 10;
                break;
            }
        if (to_add > 0)
            int_float_decimal %= precision;
        if (i > precision)
            break;
    }

    cout << "\nTask 24 OUTPUT:\n\n";

    cout << number << " is " << int_answer << "." << float_answer << endl;

    cout << "Task 24 END\n";
    cout << "------------------------------------------------------\n\n";
}
