#include <iostream>
#define PI 3.14

using namespace std;

class areaOfCircle
{
private:
    /* data */
    float radius, area;

public:
    areaOfCircle(/* args */);
    ~areaOfCircle();

    int setRadius()
    {
        cout << "What is the Radius?" << endl;
        cin >> radius;
        return radius;
    }

    void getRadius()
    {
        cout << "Radius = " << radius << endl;
    }

    void areaofcircle()
    {
        area = PI * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

areaOfCircle::areaOfCircle(/* args */)
{
    cout << "Constructor called" << endl;
}

areaOfCircle::~areaOfCircle()
{
    cout << "Destructor Called" << endl;
}

int main()
{

    areaOfCircle one;
    one.setRadius();
    one.getRadius();
    one.areaofcircle();

    return 0;
}