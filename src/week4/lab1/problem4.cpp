//
// Created by HASAN SOLIYEV on 23/06/25.
//
#include <iostream>
using namespace std;

const int SIZE = 4;

double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += m[i][i];
    }
    return sum;
}

int main() {
    double matrix[SIZE][SIZE];

    cout << "Enter a 4x4 matrix of doubles:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    double result = sumMajorDiagonal(matrix);
    cout << "Sum of the major diagonal is: " << result << endl;

    return 0;
}
