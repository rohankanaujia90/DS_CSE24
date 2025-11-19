#include<iostream>
using namespace std;
int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}