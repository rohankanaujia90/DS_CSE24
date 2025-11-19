#include <iostream>
using namespace std;

int main() {
    float basicSalary, da, hra, grossSalary, pf, netSalary;

    // Input basic salary
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    // Calculate DA (25% of basic salary)
    da = basicSalary * 0.25;

    // Calculate HRA (15% of basic salary)
    hra = basicSalary * 0.15;

    // Calculate Gross Salary
    grossSalary = basicSalary + da + hra;

    // Calculate PF (10% of gross salary)
    pf = grossSalary * 0.10;

    // Calculate Net Salary
    netSalary = grossSalary - pf;

    // Display salary details
    cout << "\n===== Salary Details =====" << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "DA (25%): " << da << endl;
    cout << "HRA (15%): " << hra << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "PF (10%): " << pf << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
