#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int a, b;
	int addr[500];
	cin >> a;
	for (int j = 0; j < a; j++)
	{
		int median = 0, sum = 0;
		cin >> b;
		for (int i = 0; i < b; i++)
		{
			cin >> addr[i];
		}
		sort(addr, addr + b);
		median = addr[b / 2];
		for (int i = 0; i < b; i++)
		{
			sum += abs(addr[i] - median);
		}
		cout << sum << '\n';
	}
	return 0;
}