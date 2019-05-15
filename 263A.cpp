#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int n;
	int result;
	for ( int i=0; i< 5; i++)
	{
		for (int j=0; j< 5; j++)
		{
			cin >> n;
			if (n==1) result= abs(2-i) + abs(2-j);
		}
	}
	cout << result;
	return 0;
}