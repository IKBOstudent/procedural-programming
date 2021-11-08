#include "HEADER_zads.h"
#include <vector>

using std::vector;

void zad_automatnyi_rasposnovatel() {
    cout << "------------------------------------------------------\n";
    cout << "Task 21 BEGIN\n\n";

    cout << "\'\'\' This program converts roman number to integer \'\'\'\n";

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

    const string RULE_1 = "The digits I, X, C and M may occur\n"
                          "no more than three times in a row.\n";

    const string RULE_2 = "The digits V, L and D may occur only once.\n";

    const string RULE_5 = "The subtractive notation is possible only\n"
                          "in 6 cases: \"IV\", \"IX\", \"XL\", \"XC\", \"CD\", \"CM\".\n";

    const string RULE_6_7 = "The subtractive notation\n"
                            "of LOWER value NEVER stands in front\n"
                            "of a numeral of LARGER value.\n"
                            "AND a numeral of LOWER value NEVER stands\n"
                            "in front of a subtractive notation.\n";

    const string RULE_8 = "A numeral NEVER stands AFTER a subtractive notation\n"
                          "of the same range 1-9 / 10-90 / 100-900\n";

    const string ROMAN_ALPHABET = "IVXLCDM";

    int answer;
    cout << "\nEnter a roman number using only { I, V, X, L, C, D, M }\n";

    while (true) {
        string roman;
        getline(cin, roman);

        bool bad_string = false;

        if (roman.length() == 0)
            bad_string = true;

        // checking input
        for (char i: roman) {
            bool ok_char = false;
            for (char j: ROMAN_ALPHABET)
                if (i == j)
                    ok_char = true;

            if (!ok_char) {
                cout << "Your input has NON-roman symbols.\n"
                        "Enter again!\n";
                bad_string = true;
                break;
            }
        }

        // if s is ready to be converted
        if (bad_string)
            continue;

        const vector<char> DIGITS { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
        const vector<int> DECIMAL_DIGITS { 1, 5, 10, 50, 100, 500, 1000 };

        const vector<string> SUBTRACTIVE_COMBS { "IV", "IX", "XL", "XC", "CD", "CM" };
        const vector<int> DECIMAL_SUBTRACTIVE_COMBS { 4, 9, 40, 90, 400, 900 };

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
                                cout << RULE_1;
                                cout << "Enter again\n";
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
                            cout << RULE_2;
                            cout << "Enter again\n";
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

        bool found_sub;

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
                        cout << RULE_5;
                        cout << "Enter again\n";
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
                    cout << RULE_6_7;
                    cout << "Enter again\n";
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
                            cout << RULE_8;
                            cout << "Enter again\n";
                            bad_string = true;
                            break;
                        }
                    }
                }
            }
            summa += decimals[i];
        }

        if (!bad_string){
            answer = summa;
            break;
        }
    } // end while

    cout << "\nTask 21 OUTPUT: \n";

    cout << answer << endl;

    cout << "\nTask 21 END\n";
    cout << "------------------------------------------------------\n\n";
}
