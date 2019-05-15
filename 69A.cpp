#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int x[100],y[100],z[100];
	cin >> n;
	for (int i=0; i< n; i++) 
	{
		cin >> x[i] >> y[i]>> z[i];
		if (i>0) 
		{
			x[0]+= x[i];
			y[0]+= y[i];
			z[0]+= z[i];
		}
	}
	if (x[0]==0 && y[0]==0 && z[0]==0) cout << "YES"<<endl;
	else cout << "NO"<< endl;
	return 0;
}