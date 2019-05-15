#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	bool isSatisfy=false;
	int length[19]={}, k=0, j, l=0, c=0;
	for(int i=0; i<n*2+1; i++)
	{
		l=c;
		for (j=0; j<=c; j++)
		{
			for(int x=0; x<2; x++)
			{
				if (x==0) k=n-l;
				else k=n+l;
				length[k] = j;
				for (int d=0; d<(n-c)*2; d++) cout << " ";
				cout << j << " ";
				
				//cout << " i="<< i << " j=" << j << " c=" << c << " l=" << l << " isi=" << length[k] <<endl;
				//int hold;
				//cin >> hold;
			}
			l--;
		}
		if (c ==n) isSatisfy =true;
		if (isSatisfy) c--;
		else c++;
		//for (int y=0; y<n*2+1; y++) cout << length[y] ;
		cout << endl;
	}
	return 0;
}