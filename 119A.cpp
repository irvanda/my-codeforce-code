#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x, int y)
{
	int max=1;
	for (int i=2; i <= min(x,y); i++)
	{
		if ( x%i == 0 && y%i == 0) max = i;
	}
	return max;
}
int main() 
{
	unsigned int a,b,n;
	bool simonWin;
	cin >> a >> b >> n;
	while (n>0)
	{
		if (n>0)
		{
			simonWin =  true;
			n -= gcd(a,n);
		}
		if (n>0)
		{
			simonWin =  false;
			n -= gcd(b,n);
		}
	}
	if(simonWin) cout << "0";
	else cout << "1";
	return 0;
}
		