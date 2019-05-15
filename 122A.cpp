#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>

using namespace std;

int main()
{
	int lucky[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int n;
	cin >> n;
	bool luck = true;
	for (int i=0; i<14; i++)
	{
		if (n%lucky[i] == 0) 
		{
			cout << "YES";
			luck = false;
			break;
		}
	}
	if (luck) cout << "NO";
	return 0;
}