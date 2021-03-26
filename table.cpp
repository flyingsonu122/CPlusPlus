#include <iostream>

using namespace std;


int main()
{
	int i, j, n;
	cout << "Enter number upto which you want it's table : ";
	cin >> n;
	for(i=1; i<=n; i++)
	{
		cout << "\n\t table of " << i << " \n\n" ;
		for(j=1;j<=10; j++)
		{
			cout << i << " * " << j << " = "<< i*j << endl;
		}
		cout << "\n";
	}

	return 0;
}
