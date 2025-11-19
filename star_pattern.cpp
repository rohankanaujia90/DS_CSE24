#include <iostream>
using namespace std;

int main() {
    // Outer loop for rows (1 to 5)
    for (int i = 1; i <= 5; i++) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
