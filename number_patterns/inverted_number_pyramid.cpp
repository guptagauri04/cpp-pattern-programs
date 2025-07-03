/*
    Author: Gauri Gupta
    Program: Inverted Number Pyramid
    Description: Prints a pattern of decreasing rows with numbers from 1 to i.
    Example:
    Input: 5
    Output:
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
