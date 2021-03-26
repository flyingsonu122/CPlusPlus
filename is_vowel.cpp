#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Input a Character :  ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << ch << " is a vowel." << endl;
        break;
    default:
        cout << ch << " is not a vowel." << endl;
    }

    return 0;
}
