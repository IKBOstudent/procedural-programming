#include <iostream>
#include <vector>
#include "zads.h"
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;
using std::ifstream;


void roman() {
    cout << "------------------------------------------------------\n";
    const string filename("../ikbo/roman.txt");

    ifstream fin(filename);

    while (!fin.eof()) {
        /**
         * @RULE_1
         * The digits I, X, C and M may occur
         * no more than three times in a row.
         *
         * @RULE_2
         * The digits V, L and D may occur only once.
         *
         * @RULE_3
         * When a digit of LOWER value is written
         * AFTER a digit of HIGHER value,
         * the values of all the digits are added.
         *
         * @RULE_4
         * When the digit I, X or C is written
         * BEFORE a digit of HIGHER value,
         * the value of the lower digit is subtracted
         * from the value of the digit of higher value.
         *
         * @RULE_5
         * The subtractive notation is possible only
         * in 6 cases: "IV", "IX", "XL", "XC", "CD", "CM".
         *
         * @RULE_6
         * The subtractive notation
         * of LOWER value NEVER stands in front
         * of a numeral of LARGER value.
         *
         * @RULE_7
         * A numeral of LOWER value NEVER stands
         * in front of a subtractive notation.
         *
         * @RULE_8
         * A numeral NEVER stands AFTER a subtractive notation
         * of the same range 1-9 / 10-90 / 100-900
        */

        string roman;
        getline(fin, roman, ' ');

        const vector<char> DIGITS { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
        const vector<int> DECIMAL_DIGITS { 1, 5, 10, 50, 100, 500, 1000 };

        const vector<string> SUBTRACTIVE_COMBS { "IV", "IX", "XL", "XC", "CD", "CM" };
        const vector<int> DECIMAL_SUBTRACTIVE_COMBS { 4, 9, 40, 90, 400, 900 };

        bool bad_string = false;

        int len = (int)roman.length();

        vector<int> decimal_indexes;

        vector<int> repeating { 0, 0, 0, 0, 0, 0, 0 };

        int last_match = 10;

        // searching for the roman digit in DIGITS
        for (int i = 0; i < len; i++){
            for (int match = 0; match < DIGITS.size(); match++){
                if (roman[i] == DIGITS[match]){
                    decimal_indexes.push_back(match);
                    if (match % 2 == 0){
                        if (last_match == match){
                            repeating[match]++;
                            if (repeating[match] == 4) {
                                // RULE_1 violation
                                cout << "problem RULE_1\n";
                                bad_string = true;
                                break;
                            }
                        } else {
                            repeating[match] = 1;
                            last_match = match;
                        }

                    } else {
                        repeating[match]++;
                        if (repeating[match] == 2) {
                            // RULE_2 violation
                            cout << "problem RULE_2\n";
                            bad_string = true;
                            break;
                        }
                    }

                    break;
                }
            }
        }

        if (bad_string)
            continue;

        vector<int> decimals;

        bool found_sub = false;

        // searching for subtractive notations in SUBTRACTIVE_COMBS
        for (int i = 0; i < len; i++){
            int current = decimal_indexes[i];
            if (i != len - 1){
                int next = decimal_indexes[i + 1];

                found_sub = false;
                if (current < next){
                    string sub;
                    sub += DIGITS[current];
                    sub += DIGITS[next];

                    int sub_index;
                    for (int match = 0; match < SUBTRACTIVE_COMBS.size(); match++){
                        if (SUBTRACTIVE_COMBS[match] == sub){
                            found_sub = true;
                            sub_index = match;
                            break;
                        }
                    }

                    if (!found_sub){
                        cout << "RULE_5 violation\n";
                        bad_string = true;
                        break;
                    } else {
                        decimals.push_back(DECIMAL_SUBTRACTIVE_COMBS[sub_index]);
                        i++;
                    }
                } else
                    decimals.push_back(DECIMAL_DIGITS[current]);

            } else {
                decimals.push_back(DECIMAL_DIGITS[current]);
            }
        }

        if (bad_string)
            continue;

        int summa = 0;
        // finding the sum of digits
        for (int i = 0; i < decimals.size(); i++){
            if (i < (decimals.size() - 1)) {
                int current = decimals[i];
                int next = decimals[i+1];

                if (current < next) {
                    cout << "RULE_6-7 violation\n";
                    bad_string = true;
                    break;
                } else {
                    bool sub = false;
                    for (int j : DECIMAL_SUBTRACTIVE_COMBS){
                        if (j == current) {
                            sub = true;
                            break;
                        }
                    }
                    if (sub){
                        if ((current < 10 and next < 10)  // range 1 - 9
                            or (current >= 10 and current < 100 and next >= 10 and next < 100)  // range 10 - 90
                            or (current >= 100 and current < 1000 and next >= 100 and next < 1000))  // range 100 - 900
                        {
                            cout << "RULE_8 violation\n";
                            bad_string = true;
                            break;
                        }
                    }
                }
            }

            summa += decimals[i];
        }

        if (!bad_string){
            cout << roman << " = " << summa << endl;
        } else
            cout << "bad string\n";

    } // end while

    cout << "------------------------------------------------------\n\n";
}
