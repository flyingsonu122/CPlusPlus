#include <iostream>

using namespace std;

unsigned long long factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int num;
    cout << "Enter number to find it's factorial : ";
    cin >> num;
    unsigned long long result = factorial(num);
    cout << "factorial of " << num << " is " << result << endl;
}
