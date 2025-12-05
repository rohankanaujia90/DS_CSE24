#include <bits/stdc++.h>
using namespace std;
// int main (){
//     char greeting[6] = {'H' , 'e', 'l', 'l', 'o', '\0'};
//     cout << "Welcome Message: ";
//     cout << greeting << endl;
//     return 0;

// }

// int main(){
//     char str[100];
//     cout << "Enter a String: ";
//     cin.getline(str, 100);
//     cout << "You Entered : "<< str << endl;
//     return 0;

// }

// int main(){
//     char f_name[20];
//     char l_name[20];
//     char full_name[50];
//     cout << "Enter your first name: ";
//     cin >> f_name;
//     cout << "Enter your last name: ";
//     cin >> l_name;
//     cout << "Hi " << f_name << "! Your first name has "<< strlen(f_name)<< " characters. "<< endl 
//     << "And your last name has "<< strlen(l_name)<<" Rcharacters."<<endl;
//     strcpy(full_name, f_name);
//     strcat(full_name, " ");
//     strcat(full_name, l_name);
//     cout << "Your Full name is: "<< full_name << endl;
//     if (strlen(f_name) == strlen(l_name))
//         cout<<"Both strings are equal. "<<endl;
//     else
//         cout<<"Strings are not eqaul. "<< endl;
//     return 0;        

    
// }

// int main(){
//    char str1[20];
//    char str2[20];
//    cout << "Enter 1st String: ";
//    cin >> str1;
//    cout << "Enter 2nd String: ";
//    cin >> str2;
//    strcat(str1, " ");
//    strcat(str1, str2);
//    cout << str1;
//    return 0;

// }

// int main(){
//     string str1, str3, str2;
//     cout << "Enter 1st String: ";
//     getline(cin, str1);
//     cout << "Enter 2nd String: ";
//     getline(cin, str2);
//     str3 = str1 + " " + str2; 
//     cout << str3 << endl;
//     return 0;
// }

// int main(){
//     string str1 = {"hello"};
//     string str2 = {"joy"};
//     string str3 (str2);
//     string str4 (5, 'a');
//     cout<<str1 << endl<< str2 << endl
//         << str3 << endl << str4 << endl;
//     return 0;    
// }

// int main(){
//     string str;
//     cout << "Enter a String: ";
//     getline(cin, str);
//     cout << "String length: " << str.length() << endl;
//     return 0;
// }

// int main(){
//     string str1 = "Welcome";
//     string str2 = "Home";
//     if ((str1.compare(str2) == 0) || (str1 == str2)) {
//         cout << "Both strings are equal." << endl;
//     } else {
//         cout << "Strings are not equal." << endl;
//     }
//     return 0;
// }

// int main(){
//     string str1 = "Hi! Welcome Home";
//     string str2 = "I am Nik";
//     cout << str1.insert(4, "Joy ") << endl;
//     cout << str1.insert(4, str2) << endl;
//     cout << str1.insert(21, ". What will you have?", 4,5) << endl;
//     return 0;

// }

// right rotation
// int main() {
//     string s2 = "Rishika chachundari";
//     string rotateds;
//     int k = 3;
//     cout<<"Original:"<<s2<<endl;
//     int n = s2.length();
//     k=k%n;
//     if(k==0){
//         rotateds = s2;
        
//     }
//     else{
//         rotateds = s2.substr(n-k) + s2.substr(0,n-k);
//     }
//     cout<<"rotated string is : "<< rotateds;
// }

//left rotation
// int main() {
//     string s2 = "Rishika chachundari";
//     string rotateds;
//     int k = 3;
//     cout << "Original: " << s2 << endl;
//     int n = s2.length();
//     k = k % n;
//     if (k == 0) {
//         rotateds = s2;
//     } else {
//         rotateds = s2.substr(k) + s2.substr(0, k);
//     }
//     cout << "Rotated string is: " << rotateds << endl;
//     return 0;
// }

// int main(){
//     string s, n;
//     cout << "Enter a string: ";
//     getline(cin, s);

//     int begin = 0;
//     int end = s.length() - 1;
//     while (begin < end ){
//         while (begin < end && !isalnum(s[begin])) {
//             begin++;
//         }
//         while (begin < end && !isalnum(s[end])) {
//             end--;
//         }
//         if (tolower(s[begin]) != tolower(s[end])) {
//             cout << "The string is not a palindrome." << endl;
//             return 0;
//         }
//         begin++;
//         end--;

//     }
//     cout << "The string is a palindrome." << endl;
//     return 0;
// }

//erase characters from string
// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline (cin, str);
//     cout << "Original String: " << str << endl;
//     str.erase(5, 3); //erases 3 characters from index 5
//     cout << "String after erasing characters: " << str << endl;
//     return 0;
// }

// count vowels and consonants in a string
// int main(){
//     string str;
//     int vowels = 0, constants = 0;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     for (char c : str){
//         c = tolower(c);
//         if (isalpha(c)){
//             if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//                 vowels++;
//             } else {
//                 constants++;
//             }
//         }
//     }
//     cout << "Number of vowels: " << vowels << endl;
//     cout << "Number of consonants: " << constants << endl;
//     return 0;
// }

//capitalize first letter of each word in a string
// int main(){
//     string str;
//     cout << "Enter a string: ";
//     getline(cin, str);
//     bool capitalize = true;
//     for (size_t i = 0; i < str.length(); i++){
//         if (isspace(str[i])){
//             capitalize = true;
//         } else if (capitalize && isalpha(str[i])){
//             str[i] = toupper(str[i]);
//             capitalize = false;
//         } else {
//             str[i] = tolower(str[i]);
//         }
//     }
//     cout << "Capitalized String: " << str << endl;
//     return 0;
// }

//shorting name
int main(){
    string str1, str2;
    cout << "Ennter Your Name: ";
    getline(cin, str1);
    sort(str1.begin(), str1.end());
    cout << "Sorted Name: " << str1 << endl;
    return 0;
}