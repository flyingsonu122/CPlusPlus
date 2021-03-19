#include<iostream>
using namespace std;

int main() {
    int a, b, ch;
    cout << "\tMenu\t" << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Mutiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "----------------" << endl;

    cout << "Enter your choice : " << endl;
    cin >> ch;
    if(ch <= 4 && ch > 0) {
        cout << "Enter two numbers: " << endl;
        cin >> a >> b;
    }
    // else {
    //     cout << "Invalid choice" << endl;
    // }

    switch (ch)
    {
    case 1:
        cout << "Addition of " << a << " and " << b << " = " << a + b;
        break;
    case 2:
        cout << "Subtraction of " << a << " and " << b << " = " << a - b;
        break;
    case 3:
        cout << "Multiplication of " << a << " and " << b << " = " << a * b;
        break;
    case 4:
        cout << "Division of " << a << " and " << b << " = " << a / b;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}