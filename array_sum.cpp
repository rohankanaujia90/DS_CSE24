#include <bits/stdc++.h>
using namespace std;

int main() {
     int arr[5];
    int sum = 0;

    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
        cout << sum;
    }

    cout << endl;
    return 0;

}