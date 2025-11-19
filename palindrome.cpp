#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

   string str,s1 ;
   cin>>str;
   s1=str;
   reverse(str.begin(),str.end());
   if(s1==str){
    cout<<"Pallindrome\n";
   }
   else{
    cout<<"Non Pallindrome\n";
   }
  return 0;
}