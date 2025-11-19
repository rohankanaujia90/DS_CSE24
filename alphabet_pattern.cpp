#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        char ch = static_cast<char>('A' + (i - 1));

        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
