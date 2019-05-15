#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int p[n], i;
	for (int j=0; j<n; j++)	
	{
		cin >> i;
		p[i-1] = j+1;
	}
	for (int x=0; x<n; x++)
	{
		cout << p[x];
		if (x<n-1) cout <<  " ";
	}
	return 0;
}