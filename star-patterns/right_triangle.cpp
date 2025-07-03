/*
    Author: Gauri Gupta
    Program: Right-Aligned Star Triangle
    Description: Prints a right-angled triangle of stars using user-defined number of rows.
    Example:
    Input: 5
    Output:
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
