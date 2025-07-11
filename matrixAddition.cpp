#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int mat1[10][10], mat2[10][10], sum[10][10];

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat1[i][j];

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> mat2[i][j];

    // Add matrices
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            sum[i][j] = mat1[i][j] + mat2[i][j];

    cout << "Addition of matrices:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
