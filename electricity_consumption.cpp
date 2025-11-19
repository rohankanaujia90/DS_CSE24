#include <iostream>
using namespace std;

int main() {
    int N;
    int reading;
    int totalConsumption = 0;
    int count = 0;

    cout << "Enter the number of hourly readings: ";
    cin >> N;

    cout << "Enter " << N << " electricity readings (in units):\n";

    while (count < N) {
        cout << "Hour " << (count + 1) << ": ";
        cin >> reading;
        totalConsumption += reading;
        count++;
    }

    cout << "\n----- Electricity Consumption Report -----\n";
    cout << "Total hours monitored: " << N << endl;
    cout << "Total consumption: " << totalConsumption << " units" << endl;

    return 0;
}




































































































































































