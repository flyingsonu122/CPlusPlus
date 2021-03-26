#include <iostream>
using namespace std;

int main()
{
	int i, n ;
	cout << "Enter a number upto which you want to find it's cube  : ";
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cout << "Cube of " << i << " is " << i*i*i << endl;;
	}
	
	return 0;
	
}
