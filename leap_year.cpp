#include <iostream>
using namespace std;

int main() {
    int year;
    bool isLeap;

    // Input year
    cout << "Enter a year: ";
    cin >> year;

    // Check if leap year using ternary operator
    // Leap year rules:
    // 1. Divisible by 400 -> Leap year
    // 2. Divisible by 100 -> Not a leap year
    // 3. Divisible by 4 -> Leap year
    // 4. Otherwise -> Not a leap year
    isLeap = (year % 400 == 0) ? true :
             ((year % 100 == 0) ? false :
             ((year % 4 == 0) ? true : false));

    // Display the result
    cout << year << (isLeap ? " is a Leap Year." : " is not a Leap Year.") << endl;

    return 0;
}
