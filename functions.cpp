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

// void palindrome(string str){
//     string s1 = str;
//     reverse(s1.begin(), s1.end());
//     if(str == s1){
//         cout << "Palindrome" << endl;
//     } else {
//         cout << "Not a Palindrome" << endl;
//     }
// }
// int main(){
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;
//     palindrome(str);
//     return 0;
// }

// void sum(int N){
//     int total = 0;
//     int remainder = 0;
//     while (N != 0)
//     {
//         remainder = N % 10;
//         total = total + remainder;
//         N = N / 10;
//     }
//     cout << total << endl;
// }
// int main(){
//     int N;
//     cout << "Enter a number: ";
//     cin >> N;
//     sum(N);
//     return 0;
// }