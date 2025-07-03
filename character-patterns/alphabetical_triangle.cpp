/*
    Author: Gauri Gupta
    Program: Alphabetical Triangle Pattern
    Description: Prints an alphabetical triangle where each row has the same character,
                 increasing from 'A' with each new row.
    Example:
    Input: 5
    Output:
    A
    B B
    C C C
    D D D D
    E E E E E
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number n : ";
    cin >> n;

    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
        }
        ch++;
        cout << endl;
    }
    return 0;
}

