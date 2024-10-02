#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> column;

    int a[row][column]; // First array
    int b[row][column]; // Second array
    int sum[row][column]; // Array to store the sum

    // Input elements for the first array
    cout << "Enter elements for the first array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> a[i][j];
        }
    }

    // Input elements for the second array
    cout << "Enter elements for the second array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> b[i][j];
        }
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Output the sum of the arrays
    cout << "Sum of the arrays:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << sum[i][j] << " "; // Print each element of the sum
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0; // Indicate successful completion
}
