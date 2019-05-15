#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, a[100], b=100, c=0, d=0, e=0;
	cin >> n;
	for (int i=0; i< n; i++) 
	{
		cin >> a[i];
		if (a[i] == min(b,a[i])) d=i;
		if (a[i] == max(c,a[i]) && c!=a[i]) e=i;		
		b = min(b,a[i]);
		c = max(c,a[i]);
	}
	//cout << b <<" "<< c << " "<<  d << " "<< e << endl;
	if (d-e>0) d = n-d+e-1;
	else d = n-d+e-2;
	cout << d;
	return 0;
}