#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    // Prompt user for the number of rows and columns
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;

    // Declare the matrices
    int a[rows][columns], b[rows][columns], c[rows][columns];

    // Input elements for the first matrix
    cout << "Enter the elements of the first matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> a[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter the elements of the second matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> b[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output the resulting matrix
    cout << "Resulting matrix after addition:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
