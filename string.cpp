#include<iostream>
#include<cstring>
#include<string>
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

int main(){
    string str1 = "Hi! Welcome Home";
    string str2 = "I am Nik";
    cout << str1.insert(4, "Joy ") << endl;
    cout << str1.insert(4, str2) << endl;
    cout << str1.insert(21, ". What will you have?", 4,5) << endl;
    return 0;
}