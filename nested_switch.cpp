#include<iostream>

using namespace std;

int main() {
    int num1;
    cout << "Enter a number : " ;
    cin >> num1;
    switch (num1)
    {
    case 0:
        cout << "Number is Zero (0 )" << endl;
        break;
    
    default:
        int num2;
        num2 = num1 % 2;
        switch (num2)
        {
        case 0:
            cout << "Number is Even" << endl;
            break;
        case 1:
            cout << "Number is Odd " << endl;
        default:
            break;
        }
    }

    return 0;

}