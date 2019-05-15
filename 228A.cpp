#include <iostream>

using namespace std;

int main() 
{
	long long S[4], k=0, i;
	for (int j=0; j<4;j++) 
	{
		cin >> S[j];
		for (i = j; i>0;i--)
		{
			if (S[j] == S[j-i]) 
			{
				k++;
				break;
			}
		}
	}
	cout << k;
	return 0;
}

/*for (int j=0; j<3;j++)
	{
		for (int i=j+1; i<4; i++)
		{
			if (S[j] == S[i]) 
			{
				k++;
				break;
			}
		}
	}*/