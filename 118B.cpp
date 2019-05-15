#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	bool isSatisfy=false;
	int j, l, c=0;
	for(int i=0; i<n*2+1; i++)
	{
		l=0;
		bool isL=false;
		for (j=0; j<2*c+1; j++)
		{
			if (j==0) for (int d=0; d<(n-c)*2; d++) cout << " ";
			if (j==c)
			{	
				isL = true;
			}
			cout << l;
			if(isL) l--;
			else l++;
			if (l >= 0) cout << " ";
		}
		if (c ==n) isSatisfy =true;
		if (isSatisfy) c--;
		else c++;
		cout << endl;
	}
	return 0;
}