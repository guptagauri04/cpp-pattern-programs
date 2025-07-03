/*
    Author: Gauri Gupta
    Program: Floyd's Triangle
    Description: Prints Floyd's Triangle where numbers continue incrementing row by row.
    Example:
    Input: 5
    Output:
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}
