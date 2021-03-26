#include <iostream>

using namespace std;

int main()
{
	int i, n ;
	cout << "Enter a number upto which you want to find it's square  : ";
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cout << "Square of " << i << " is " <<  i*i << endl;
	}
	
	return 0;
	
}
