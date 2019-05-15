#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string input[4];
	int i=0, j=0;
	for (j=0;j<4;j++) cin >> input[j];
	
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			//cout << input[i].at(j) << input[i+1].at(j) << input[i].at(j+1) << input[i+1].at(j+1) << endl;
			if((input[i].at(j) == input[i+1].at(j)||input[i].at(j+1) == input[i+1].at(j+1)) && (input[i].at(j) == input[i].at(j+1) || input[i+1].at(j) == input[i+1].at(j+1)))
			{
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
			