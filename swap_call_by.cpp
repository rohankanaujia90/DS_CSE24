#include<bits/stdc++.h>
using namespace std;
//call by value
// void swap(int x,int y){
//     int t = x;
//     x=y;
//     y=t;
//     cout<<"after swap function x: "<< x << "\n y: " << y << endl;
// }
// int main(){
//     int x=5, y=10;
//     cout<<"before swap function x: "<< x << "\n y: " << y << endl;
//     swap(x,y);
//     cout<<"after swap function in main x: "<< x << "\n y: " << y << endl;
//     return 0;  
// }


 //call by reference
 void func(int &x){
    x--;
 }
 int main(){
    int a = 5;
    cout << a << endl;
    func(a);
    cout << a << endl;
 }