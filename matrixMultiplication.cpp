#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> row1 >> col1;

    cout << "Enter rows and columns for second matrix: ";
    cin >> row2 >> col2;

   
    if (col1 != row2) {
        cout << "Matrix multiplication not possible. Columns of first matrix must equal rows of second.\n";
        return 0;
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col2; j++)
            result[i][j] = 0;

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
