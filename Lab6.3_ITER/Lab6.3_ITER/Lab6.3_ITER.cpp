#include <iostream>
#include <iomanip>

using namespace std;

void output(int a[], int n);
void sumA(int a[], int n, int& sum);

int main()
{
	const int n = 4;
	int sum = 0;
	int a[n] = { 1,2,3,4 };
	output(a, n);
	sumA(a, n, sum);
	cout << "Sum: " << sum << endl;
}

void output(int a[],int n)
{
	cout << "a= ";
	for (int i = 0;i < n;i++)
	{
		cout << a[i] << setw(4);
	}
	cout << endl;
}

void sumA(int a[], int n,int& sum)
{
	for (int i = 0;i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			sum += a[i];
		}
	}
}