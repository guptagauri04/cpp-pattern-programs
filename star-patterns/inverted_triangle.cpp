/*
    Author: Gauri Gupta
    Program: Inverted Star Triangle
    Description: Prints an inverted triangle of stars starting from n stars to 1.
    Example:
    Input: 5
    Output:
    * * * * *
    * * * *
    * * *
    * *
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
