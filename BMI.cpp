#include <iostream>

using namespace std;

int main()
{
    float weight, height, BMI;
    cout << "Enter weight in kilograms :";
    cin >> weight;
    cout << "Enter height in meters:";
    cin >> height;

    BMI = weight / (height * height);

    cout << "\n Body Mass Index ( BMI ) = " << BMI << endl;

    if (BMI >= 25.0)
    {
        cout << "\n\n Status  : Overweight\n";
    }
    else if (BMI >= 18.5)
    {
        cout << "\n\n Status  : Normal\n";
    }
    else
    {
        cout << "\n\n Status  : Underweight\n";
    }

    return 0;
}
