#include<iostream>

using namespace std;

int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}

int main() {
	int result = factorial(5);
	cout << result << endl;
  
}