#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input for the matrix dimensions
    cout << "Enter number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter number of columns for the matrix: ";
    cin >> cols;

    // Declare the matrix
    int a[rows][cols], transposed[cols][rows];

    // Input elements for the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j];
        }
    }

    // Perform matrix transposition
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = a[i][j];
        }
    }

    // Output the transposed matrix
    cout << "Transposed matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
