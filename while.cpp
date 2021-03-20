// sum of 10 numbers

#include<iostream>

using namespace std;

int main() {
    int a = 1 ,sum = 0;
    while (a<=10)
    {
        cout << a << " ";
        sum += a;
        a++;
    }
    
    cout << "\nsum of 10 numbers = " << sum << endl;
    return 0;

}