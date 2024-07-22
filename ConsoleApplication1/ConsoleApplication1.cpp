//杭州电子科技大学-1850
#include <iostream>	
using namespace std;
int a[101] = {0};
int main()
{
	int m;
	while (cin >> m)
	{
		if (m == 0)break;
		int t = 0;
		for (int i = 0; i < m; i++)
		{
			cin >> a[i];
			t ^= a[i];
		}
		if (t == 0)
		{
			cout << 0 << endl;
		}
		else
		{
			int count = 0;
			for (int i = 0; i < m; i++)
			{
				if ((a[i] ^ t) < a[i])count++;
			}
			cout << count << endl;
		}
	}
}