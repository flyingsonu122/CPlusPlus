#include <iostream>

using namespace std;

int main()
{
    int number;
    int prime = 0;
    cout << "Enter a Number :" << endl;
    cin >> number;
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            prime = 1;
        }
    }

    if (number == 1)
    {
        cout << "1 is Not a Prime Number" << endl;
    }
    else if (prime == 0)
    {
        cout << number << " is a Prime number" << endl;
    }
    else
    {
        cout << number << " is Not a Prime number" << endl;
    }

    return 0;
}