#include<iostream>
using namespace std;
int main(){
    int a[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} };
    int row = 2;
    int col = 1;
    cout<<"The elements of the array are: [" << row << "][" << col <<"] "<< a[row][col]<<endl;

}