#include <iostream>
using namespace std;

int main() {
    
    int myArray[] = {10, 20, 30, 40, 50};

    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    cout << std::endl;

    myArray[2] = 99;

    cout << "Modified array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << myArray[i] << " ";
    }
    cout << std::endl;

    return 0;
}