#include <iostream>
using namespace std;

int main() {
    // Outer loop for rows (5 to 1)
    for (int i = 5; i >= 1; i--) {
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Move to next line after each row
        cout << endl;
    }

    return 0;
}
