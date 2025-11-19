#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, digit4, sum;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    digit1 = number % 10;           
    digit2 = (number / 10) % 10;    
    digit3 = (number / 100) % 10;   
    digit4 = (number / 1000) % 10;

    
    sum = digit1 + digit2 + digit3 + digit4;

    cout << "\nThe digits are: " << digit4 << ", " << digit3 << ", " << digit2 << ", " << digit1 << endl;
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
