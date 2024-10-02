#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input for the first matrix dimensions
    cout << "Enter number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter number of columns for the first matrix: ";
    cin >> cols1;

    // Input for the second matrix dimensions
    cout << "Enter number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter number of columns for the second matrix: ";
    cin >> cols2;

    // Check if multiplication is possible
    if (cols1 != rows2) {
        cout << "Matrix multiplication is not possible. The number of columns in the first matrix must equal the number of rows in the second matrix." << endl;
        return 1; // Exit with an error
    }

    // Declare matrices
    int a[rows1][cols1], b[rows2][cols2], c[rows1][cols2];

    // Input elements for the first matrix
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> a[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> b[i][j];
        }
    }

    // Initialize the resulting matrix to zero
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            c[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output the resulting matrix
    cout << "Resulting matrix after multiplication:\n";
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


//Matrix A (of size m × n) can be multiplied by Matrix B (of size p × q) 
//if and only if the number of columns in A (which is n) is equal to the 
//number of rows in B (which is p).
