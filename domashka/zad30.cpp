#include "HEADER_zads.h"

#include <vector>

using std::vector;

void make_matrix(vector<vector<double>>& temp,
                 vector<vector<double>>& A, int row, int col) {
    int row_shift = 0;
    int col_shift = 0;

    for (int i = 0; i < A.size(); i++) {
        if (i == row)
            row_shift++;
        else {
            for (int j = 0; j < A.size(); j++) {
                if (j == col)
                    col_shift++;
                else
                    temp[i-row_shift].push_back(A[i][j]);
            }
            col_shift = 0;
        }
    }
}

double det(vector<vector<double>>& A, int row = 0, int col = 0) {
    if (A.size() == 1)
        return A[0][0];

    double Alg_c = 0;
    for (int j = 0; j < A.size(); j++) {
        double sign = 1;
        if (row + j % 2 != 0)
            sign *= -1;

        vector<vector<double>> temp(A.size() - 1);
        make_matrix(temp, A, row, j);

        double determinant = det(temp);
        Alg_c += sign * A[row][j] * determinant;
    }
    return Alg_c;
}

void zad_ryady_n2(){
    cout << "------------------------------------------------------\n";
    cout << "Task 30 BEGIN\n\n";

    cout << "\'\'\' This program returns the determinant\n"
            "of a matrix N x N \'\'\'\n";

    cout << "Enter N\n";
    int N;
    number_validator(N);

    cout << "Enter your matrix\n";
    vector<vector<double>> A(N);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double x;
            cin >> x;
            A[i].push_back(x);
        }
    }

    cout << endl;
    for (vector<double>& x : A) {
        for (double y : x)
            cout << y << " ";
        cout << endl;
    }

    double determinant = det(A);

    cout << "\nTask 30 OUTPUT:\n";

    cout << "Determinant = " << determinant << endl;

    cout << "Task 30 END\n";
    cout << "------------------------------------------------------\n\n";
}

