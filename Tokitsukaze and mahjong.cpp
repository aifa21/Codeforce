#include <bits/stdc++.h>
using namespace std;
const int maxx = 100010;
int a[maxx];
int n, k;
int main()
{
	string str;
	int a[3];
	for (int i = 0; i < 3; ++i)
	{
		cin >> str;
		a[i] = (str[0] - '0') + (str[1] - 'a')*10 ;

		cout<<a[i]<<endl;
	}

	sort(a, a + 3);
	int x = a[1] - a[0], y = a[2] - a[1];
	if (x == y && (x == 1 || y == 0))
		cout << 0 << endl;
	else if (x == 0 || x == 1 || x == 2 || y == 0 || y == 1 || y == 2)
		cout << 1 << endl;
	else
		cout << 2 << endl;
	return 0;
}
