#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, largest;

    // Input 3-digit number
    cout << "Enter a 3-digit number: ";
    cin >> number;

    // Extract each digit
    digit1 = number % 10;           // Last digit
    digit2 = (number / 10) % 10;    // Middle digit
    digit3 = (number / 100) % 10;   // First digit

    // Find largest digit using ternary operator
    largest = (digit1 > digit2) ?
              ((digit1 > digit3) ? digit1 : digit3) :
              ((digit2 > digit3) ? digit2 : digit3);

    // Display the result
    cout << "\nThe digits are: " << digit3 << ", " << digit2 << ", " << digit1 << endl;
    cout << "The largest digit is: " << largest << endl;

    return 0;
}
