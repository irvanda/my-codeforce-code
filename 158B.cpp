#include <iostream>
#include <Cmath>

using namespace std;

int main()
{
	long n, amount[4]={};
	cin >> n;
	
	for (int i = 0; i < n; i++) 
	{
		int c;
		cin >> c;
		if(c==4)
			amount[3]++;
		else
			amount[c-1]++;
	}
	amount[0]=amount[0]-amount[2];
	if (amount[0]<0) amount[0]=0;
	amount[3]+=amount[2];
	amount[0]+=amount[1]*2;
	amount[0]=ceil((float)amount[0]/4);
	cout << amount[0]+amount[3];
	return 0;
}
