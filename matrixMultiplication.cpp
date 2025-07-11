#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2,r,c;
    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible. Columns of first matrix must equal rows of second." << endl;
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], result[r1][c2] = {0};

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            cin >> mat1[i][j];

    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            cin >> mat2[i][j];

        // Multiply matrices
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                result[i][j] += mat1[i][k] * mat2[k][j];

    cout << "Product of the matrices:\n";
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;

}



    
