#include<iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if(num % 2 == 0)
    goto even;
    else
    goto odd;
    even: cout <<num << " is an even number" << endl;
    return 0;
    odd : cout << num << " is an odd number" << endl;
    return 0;
}