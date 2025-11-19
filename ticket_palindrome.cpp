#include <iostream>
using namespace std;

int main() {
    int ticketNumber, originalNumber, reversedNumber = 0, remainder;

    cout << "=== Bus Ticket Palindrome Checker ===" << endl;
    cout << "Enter the ticket number: ";
    cin >> ticketNumber;

    // Store the original number for comparison
    originalNumber = ticketNumber;

    // Using while loop to reverse the number
    while (ticketNumber != 0) {
        remainder = ticketNumber % 10;           // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Build reversed number
        ticketNumber = ticketNumber / 10;        // Remove the last digit
    }

    // Check if original and reversed numbers are the same
    cout << "\n----- Result -----" << endl;
    cout << "Original ticket number: " << originalNumber << endl;
    cout << "Reversed ticket number: " << reversedNumber << endl;

    if (originalNumber == reversedNumber) {
        cout << "\nStatus: PALINDROME ✓" << endl;
        cout << "The ticket number reads the same forwards and backwards!" << endl;
    } else {
        cout << "\nStatus: NOT A PALINDROME ✗" << endl;
        cout << "The ticket number does not read the same forwards and backwards." << endl;
    }

    return 0;
}
