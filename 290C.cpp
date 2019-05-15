#include <iostream>
#include <string>
using namespace std;

int main()
{
	int TUX, FOO=0, BAR=0, BAZ=0, QUZ=1;
	
	cin >> TUX;
	
	while (TUX>0)
	{
		int PUR;
		cin >> PUR;
		FOO += PUR;
		BAR++;
		if (FOO*QUZ >= BAR*BAZ)
		{
			BAZ = FOO;
			QUZ = BAR;
		}
		TUX--;
	}
	cout << (double)BAZ/(double)QUZ;
	return 0;
}