#include <iostream>
using namespace std;

int main() {
    int N;
    int milestone = 2;

    cout << "=== Smartwatch Step Tracker ===" << endl;
    cout << "Enter total steps taken today: ";
    cin >> N;

    if (N < 2) {
        cout << "\nNo even milestones reached yet!" << endl;
        cout << "Keep walking to reach your first milestone of 2 steps!" << endl;
        return 0;
    }

    cout << "\n----- Even Step Milestones -----" << endl;

    do {
        cout << "Milestone reached: " << milestone << " steps" << endl;
        milestone += 2;  // Move to next even number
    } while (milestone <= N);

    cout << "--------------------------------" << endl;
    cout << "Total steps today: " << N << endl;
    cout << "Great job! Keep moving!" << endl;

    return 0;
}
