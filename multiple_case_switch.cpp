#include<iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Enter a month of year 2021 :" << endl;
    cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 2:
        day = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    default:
        cout << "No such Month" << endl;
        break;
    }

    cout << "Number of days in this month = " << day << endl;
    return 0;
}