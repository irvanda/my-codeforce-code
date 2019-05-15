#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int n, Max=0, h, m, hour=-1, min=-1, count=1;
	cin >> n;
	
	for (int i=0; i< n; i++)
	{
		cin >> h >> m;
		if (h == hour && m==min) count++;
		else count = 1;
		Max = max(count,Max);
		hour =h;
		min = m;
	}
	cout << Max;
	return 0;
}