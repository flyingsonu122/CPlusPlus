#include<iostream>

using namespace std;

int main() {
    int price;
    cout << "Enter the price of the book :" << endl;
    cin >> price;
    if(price <= 600) {
        cout << "Hurry up, Buy the book" << endl;
    }

    return 0;
}