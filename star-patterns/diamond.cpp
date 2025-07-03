/*
    Author: Gauri Gupta
    Program: Diamond Star Pattern
    Description: Prints a symmetrical diamond pattern of stars using user input.
    Example:
    Input: 5
    Output:
        *
       * * *
      * * * * *
       * * *
        *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n: ";
    cin >> n;

    // upper half
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }

    // lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++) cout << "* ";
        cout << endl;
    }
    return 0;
}
