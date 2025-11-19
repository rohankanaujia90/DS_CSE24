#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display before swapping
    cout << "\nBefore swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    // Swap the values
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display after swapping
    cout << "\nAfter swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}
