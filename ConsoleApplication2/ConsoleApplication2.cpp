#include<iostream>
using namespace std;
int a[10001];
int main()
{
	a[1] = 2;
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int n;
		cin >> n;
		for (int i = 2; i <= n; i++)
		{
			a[i] = a[i - 1] + 4 * (i - 1) + 1;
		}
		cout << a[n] << endl;
	}
}