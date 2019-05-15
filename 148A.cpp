#include <iostream>

using namespace std;

int main()
{
	int k,l,m,n,i,j=0;
	long d;
	cin >> k >> l >> m >> n >> d;
	for (i=k; i<=d;)
	{
		if(k==1) {j=d;cout << j; return 0;} 
		//cout << "ke "<<i << endl;
		j++;
		i += k;
	}
	for (i=l; i<=d;)
	{
		if (i%k > 0) j++;
		i+=l;
	}
	for (i=m;i<=d;)
	{
		if (i%k > 0 && i%l >0) j++;
		i+=m;
	}
	for (i=n;i<=d;)
	{
		if (i%k > 0 && i%l >0 && i%m >0) j++;
		i+=n;
	}
	cout << j;
	return 0;
}