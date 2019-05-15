#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int a[100]={};
	for (int i=0; i<n; i++) cin >> a[i];
	cin >> m;
	int x[100]={}, y[100]={};
	for (int i=0; i<m; i++)
	{
		cin >> x[i] >> y[i];
		x[i]--;
		if (x[i]>0)
		{
			if (x[i]+1<101)
				a[x[i]+1] += a[x[i]]-y[i];
			a[x[i]-1] += y[i]-1;
			a[x[i]] = 0;	
		}
		else 
		{
			a[x[i]+1] += a[x[i]]-y[i];
			a[0] = 0;
		}
	}
	for (int i=0; i<n; i++) cout << a[i] << endl;
	return 0;
}