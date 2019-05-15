#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>
#include <sstream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string hello = "hello";
	int j=0;
	bool Hello = true, Break = false;
	
	for(int i=0; i< 5; i++)
	{
		while(s[j]!=hello[i])
		{
			if(s[j]=='\0') 
			{
				Hello = false;
				Break = true;
				break;
			}
			j++;
		}
		if(Break) break;
		if(s[j]==hello[i]) j++;
	}
	if (Hello) cout << "YES";
	else cout << "NO";
	return 0;
}