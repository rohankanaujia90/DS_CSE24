#include<bits/stdc++.h>
using namespace std;

// void printNum(int n){
//     cout << n << endl;
// }
// int main(){
//     printNum(5);
//     return 0;
// }
// void fibonacci(int n){
//     int a=0,b=1,c;
//     for(int i=0;i<n;i++){
//         cout << a << " ";
//         c=a+b;
//         a=b;
//         b=c;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     fibonacci(n);
//     return 0;
// }

// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     } 
//     else {
//         return n*factorial(n-1);
//     } 
// }
// int main(){
//     int n;
//     cin >> n;
//     cout << factorial(n) << endl;
//     return 0;
// }

void palindrome(string str){
    string rev = str;
    reverse(rev.begin(), rev.end());
    if(str == rev){
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
}
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    palindrome(str);
    return 0;
}