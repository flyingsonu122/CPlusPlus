#include <iostream>

using namespace std;

class overclass
{
public:
    int x;
    int y;
    overclass()
    {
        x = y = 0;
    }
    overclass(int a)
    {
        x = a; // y will have garbage value so can write x=y=a
        // x = y = a;
    }
    overclass(int a, int b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    overclass A;
    overclass A1(4);
    overclass A2(8, 12);
    cout << "overclass A's x,y value ::" << A.x << ", " << A.y << endl;

    cout << "overclass A1's x,y value ::" << A1.x << ", " << A1.y << endl;

    cout << "overclass A2's x,y value ::" << A2.x << ", " << A2.y << endl;

    return 0;
}
