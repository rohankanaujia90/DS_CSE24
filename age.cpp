// write a program that takes an input of age
// and prints whether the person is adult or not
#include<bits/stdc++.h>
using namespace std;
int main() {
    int age;
    cout << "Enter Your Age: ";
    cin >> age;
    if (age >= 18){
        cout << "Adult" << endl;
    }
    else{
        cout << "Not Adult" << endl;    
    }
    return 0;
}