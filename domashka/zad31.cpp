#include "HEADER_zads.h"
#include <fstream>

using std::ios;
using std::ofstream;
using std::ifstream;

void zad_fily_n11(){
    cout << "------------------------------------------------------\n";
    cout << "Task 31 BEGIN\n\n";

    cout << "\'\'\' This program works with matrices \'\'\'\n";

    string filename1("../domashka/matrix_1.txt");
    string filename2("../domashka/matrix_2.txt");
    string filename3("../domashka/matrix_3.txt");

    int matrix_count = 1;
    int dim = 3;

    ofstream fout1;
    ofstream fout2;
    ofstream fout3;

    for (int i = 0; i < matrix_count; i++){
        int A[dim][dim];

        if (i == 0)
            fout1.open(filename1);
        else
            fout1.open(filename1, ios::app);


        if (!fout1.is_open())
            cout << "Unable to open '" << filename1 << "'" << endl;
        else {
            for (int j = 0; j < dim; j++) {
                for(int k = 0; k < dim; k++) {
                    cin >> A[j][k];
                    fout1 << A[j][k] << " ";
                }
                fout1 << endl;
            }
        }
        fout1.close();

        if (i == 0)
            fout2.open(filename2);
        else
            fout2.open(filename2, ios::app);

        if (!fout2.is_open())
            cout << "Unable to open '" << filename2 << "'" << endl;
        else {
            for (int j = 0; j < dim; j++) {
                for(int k = 0; k < dim; k++) {
                    fout2 << A[k][j] << " ";
                }
                fout2 << endl;
            }
        }
        fout2.close();

        if (i == 0)
            fout3.open(filename3);
        else
            fout3.open(filename3, ios::app);

        // sort by sum regression in a row

        int A_SUMS[dim];

        for (int row = 0; row < dim; row++) {
            int row_sum = 0;
            for(int col = 0; col < dim; col++)
                row_sum += A[row][col];

            A_SUMS[row] = row_sum;
        }

        int rs = dim - 1;
        for (int c = 0; c < dim - 1; c++) {
            bool swapped = false;
            for (int j = 0; j < rs; j++) {
                if (A_SUMS[j] < A_SUMS[j + 1]) {
                    int tmp_sum = A_SUMS[j + 1];
                    A_SUMS[j + 1] = A_SUMS[j];
                    A_SUMS[j] = tmp_sum;
                    swapped = true;

                    for (int k = 0; k < dim; k++) {
                        int tmp = A[j + 1][k];
                        A[j + 1][k] = A[j][k];
                        A[j][k] = tmp;
                    }
                }
            }
            if (!swapped)
                break;
            rs--;
        }

        if (!fout3.is_open())
            cout << "Unable to open '" << filename3 << "'" << endl;
        else {
            for (int j = 0; j < dim; j++) {
                for(int k = 0; k < dim; k++) {
                    fout3 << A[j][k] << " ";
                }
                fout3 << endl;
            }

        }
        fout3.close();
    }

    cout << "\nTask 31 END\n";
    cout << "------------------------------------------------------\n\n";
}
