#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Enter the number of cars entering the parking system: ";
    cin >> N;

    cout << "\nCar Count:\n";
    cout << "----------\n";

    for (int i = 1; i <= N; i++) {
        cout << "Car " << i << " entered" << endl;
    }

    cout << "----------\n";
    cout << "Total cars in parking: " << N << endl;

    return 0;
}
