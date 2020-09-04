#include <iostream>
#include <string>
using namespace std;

class students {
    public:
        string name;
        int age;
};

int main() {
    students one,two;
    one.name = "Sonu";
    one.age = 18;
    two.name = "Anish";
    two.age = 19;
    cout << one.name; cout << one.age;
    
    cout << endl;
    
    cout << two.name; cout << two.age;

    return 0;
}