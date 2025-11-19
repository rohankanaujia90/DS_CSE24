#include<iostream>
using namespace std;
int main(){
    int a[3] = {10, 20, 30};
    int index;
    a[1] = 100;
    cout << "updated array is: " << a[0] << ", " << a[1] << ", " << a[2] << endl;
}