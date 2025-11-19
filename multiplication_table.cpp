#include <iostream>
using namespace std;

int main() {
    int number;

    // Input number from user
    cout << "Enter a number: ";
    cin >> number;

    // Display multiplication table
    cout << "\nMultiplication Table of " << number << ":" << endl;
    cout << "================================" << endl;

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}
