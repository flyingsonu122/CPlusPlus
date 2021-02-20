#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, d, r1, r2;

    cout << "Enter the co-efficients of the Quadratic Equation ( a, b, and c )" << endl;
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << "Roots are Imaginary ( No Real Roots )" << endl;
    }
    else if (d == 0)
    {
        r1 = r2 = -b / (2 * a);
        cout << "Roots are real and equal  " << r1 << " and " << r2 << endl;
    }
    else
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "Roots are real and unequal  " << r1 << " and " << r2 << endl;
    }

    return 0;
}