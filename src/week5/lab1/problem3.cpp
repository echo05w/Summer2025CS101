#include <iostream>
using namespace std;

const int SIZE = 4; // Number of columns

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    double matrix[rows][SIZE];
    cout << "Enter the matrix (" << rows << " rows × " << SIZE << " columns):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int col = 0; col < SIZE; col++) {
        cout << "sum of column " << col << " = " << sumColumn(matrix, rows, col) << endl;
    }

    return 0;
}
