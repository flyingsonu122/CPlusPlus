#include <iostream>
using namespace std;

double findMean(int a[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];

	return (double)sum / (double)n;
}

int main()
{
	int a[] = {1, 3, 4, 2, 7, 5, 8, 6};
	int n = sizeof(a) / sizeof(a[0]);
	cout << "Mean = " << findMean(a, n) << endl;
	return 0;
}
