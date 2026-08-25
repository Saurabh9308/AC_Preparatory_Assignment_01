// Q6. Matrix Multiplication
// Write a program to perform multiplication of two matrices.
// Accept the dimensions and elements of both matrices from the user. Check whether matrix multiplication is
// possible before performing the operation.
// Condition: The number of columns in the first matrix must be equal to the number of rows in the second
// matrix.
// Display the resulting matrix.


#include <iostream>
#include <vector>
using namespace std;

bool isMulPossible(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {

    int col1 = matrix1[0].size();
    int row2 = matrix2.size();

    return col1 == row2;
}

vector<vector<int>> matrixMultiplication(vector<vector<int>>& matrix1, vector<vector<int>>& matrix2) {

    int row1 = matrix1.size();
    int col1 = matrix1[0].size();
    int col2 = matrix2[0].size();


    vector<vector<int>> result(row1, vector<int>(col2, 0));

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    return result;
}

void displayMatrix(const vector<vector<int>>& matrix) {

    for (int row = 0; row < matrix.size(); row++) {
        for (int col = 0; col < matrix[0].size(); col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row1, col1, row2, col2;

    cout << "Enter number of rows of first matrix: ";
    cin >> row1;

    cout << "Enter number of columns of first matrix: ";
    cin >> col1;

    vector<vector<int>> matrix1(row1, vector<int>(col1));

    cout << "Enter elements for the first matrix:" << endl;

    for (int row = 0; row < row1; row++) {
        for (int col = 0; col < col1; col++) {
            cout << "Enter Element: ";
            cin >> matrix1[row][col];
        }
    }


    cout << "Enter number of rows of second matrix: ";
    cin >> row2;

    cout << "Enter number of columns of second matrix: ";
    cin >> col2;

    vector<vector<int>> matrix2(row2, vector<int>(col2));

    cout << "Enter elements for the second matrix:" << endl;

    for (int row = 0; row < row2; row++) {
        for (int col = 0; col < col2; col++) {
            cout << "Enter Element: ";
            cin >> matrix2[row][col];
        }
    }

    if (isMulPossible(matrix1, matrix2)) {

        vector<vector<int>> result = matrixMultiplication(matrix1, matrix2);

        cout << "\nResultant Matrix:" << endl;

        displayMatrix(result);

    } else {

        cout << "\nMatrix multiplication is not possible." << endl;
        cout << "Number of columns of first matrix must be equal to number of rows of second matrix.";
    }

    return 0;
}