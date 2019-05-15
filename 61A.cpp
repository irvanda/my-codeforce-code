#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>

using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;
	int length = x.length();
	for (int i =0; i< length; i++)
	{
		if (x[i]==y[i]) cout << "0";
		else cout << "1";
	}
	return 0;	
}