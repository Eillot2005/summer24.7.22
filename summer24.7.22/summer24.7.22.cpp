//杭州电子科技大学-1650
#include<iostream>
using namespace std;
#include<string>
int arr[1000001];
int arr1[1000001];
int main()
{
	while (1)
	{//15个字母
		int l, h;
		cin >> l >> h;
		arr[0] = arr[1] = 0;
		for (int i = 2; i <= h; i++)
		{
			arr[i] = (arr[i - 1] + 15) % i;
		}
		if (l == h && l == 0)
			break;
		if (l > h) swap(l, h);
		memset(arr1, 0, sizeof(arr1));
		for (int j = l; j <= h; j++)
		{
			int temp = arr[j];
			if (temp > (j / 2))
			{
				temp = j - temp;
			}
			if (temp < (l / 2))
			{
				arr1[temp] = 1;
			}
		}
		bool ju=false;
		for (int i = 1; i < l/2; i++)
		{
			if (arr1[i] == 0)
			{
				cout << i  << endl;
				ju = true;
				break;
			}
		}
		if (!ju)
		{
			cout << "Better estimate needed" << endl;
		}
	}
}