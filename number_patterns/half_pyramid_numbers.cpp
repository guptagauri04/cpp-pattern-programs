/*
    Author: Gauri Gupta
    Program: Half Pyramid of Numbers
    Description: Prints a left-aligned number pyramid where each row displays numbers from 1 to row number.
    Example:
    Input: 5
    Output:
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
