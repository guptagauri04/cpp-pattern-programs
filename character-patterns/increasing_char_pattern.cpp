/*
    Author: Gauri Gupta
    Program: Increasing Character Triangle Pattern
    Description: Prints a triangle with increasing characters from A onward.
    Example:
    Input: 5
    Output:
    A
    B C
    D E F
    G H I J
    K L M N O
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
            cout << ch++ << " ";
        }
        cout << endl;
    }
    return 0;
}
