#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, digit4, largest;

    // Input 4-digit number
    cout << "Enter a 4-digit number: ";
    cin >> number;

    // Extract each digit
    digit1 = number % 10;           // Last digit
    digit2 = (number / 10) % 10;    // Third digit
    digit3 = (number / 100) % 10;   // Second digit
    digit4 = (number / 1000) % 10;  // First digit

    // Find largest digit using ternary operator
    largest = (digit1 > digit2) ?
              ((digit1 > digit3) ? ((digit1 > digit4) ? digit1 : digit4) : ((digit3 > digit4) ? digit3 : digit4)) :
              ((digit2 > digit3) ? ((digit2 > digit4) ? digit2 : digit4) : ((digit3 > digit4) ? digit3 : digit4));

    // Display the result
    cout << "\nThe digits are: " << digit4 << ", " << digit3 << ", " << digit2 << ", " << digit1 << endl;
    cout << "The largest digit is: " << largest << endl;

    return 0;
}
