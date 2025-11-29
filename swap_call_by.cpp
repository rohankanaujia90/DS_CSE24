#include<bits/stdc++.h>
using namespace std;
void swap(int x,int y){
    int t = x;
    x=y;
    y=t;
    cout<<"after swap function x: "<< x << "\n y: " << y << endl;
}
int main(){
    int x=5, y=10;
    cout<<"before swap function x: "<< x << "\n y: " << y << endl;
    swap(x,y);
    cout<<"after swap function in main x: "<< x << "\n y: " << y << endl;
    return 0;  
}
