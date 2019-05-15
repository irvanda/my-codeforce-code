#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	int year;
	cin >> year;
	
	while (true)
	{
		bool diff = true;
		bool Break = false;
		year++;
		string Year = static_cast<ostringstream*>( &(ostringstream() << year) )->str();
		for(int i=0; i< 3; i++)
		{
			for (int j=i+1; j<4; j++)
			{
				if (Year[i]==Year[j]) 
				{
					diff = false;
					Break = true;
					break;
				}
			}
			if (Break) break;
		}
		if ( ! (istringstream(Year) >> year) ) year = 0;
		if (diff) break;
	}
	cout << year;
	return 0;
}	