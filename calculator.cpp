#include <iostream>

using namespace std;

int main () {

    char op, choice;
    float num1, num2;

    cout << "\n             Welcome to C++ calculator \n\n" << endl;


    cout << "Enter operator either + or - or * or /: " << endl;
    cin >> op;

    cout << "Enter two operands: " << endl;
    cin >> num1 >> num2;

    switch(op)
    {
        case '+':
            cout << "Result : " << num1+num2;
            break;

        case '-':
            cout << "Result : " << num1-num2;
            break;

        case '*':
            cout << "Result : " << num1*num2;
            break;

        case '/':
            cout << "Result : " << num1/num2;
            break;

        default:
            cout << "Error! operator is not correct" << endl;
            break;
    }

    cout << "\n\n " << endl;
    cout << "     Do you want to continue ? y for YES or n for NO" << endl;
    cin >>  choice;

    if(choice == 'y' || choice == 'Y') {
        main();

    } else {
        cout << "Thank You !" << endl;
    }


    return 0;
}
