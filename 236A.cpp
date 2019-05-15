#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>

using namespace std;

int main()
{
	string name;
	int array[26]={}, result=0;
	cin >> name;
	int length = name.length();
	
	for (int i =0; i< length; i++)
	{
		//cout << "n - "<<(int)name[i]<<endl;
		for (int j=0; j< 26; j++)
		{
			if (j+97==(int)name[i]) array[j]=1;
		}
	}
	for (int i=0; i<26; i++) result += array[i];
	
	//cout << result;
	if (result%2==0) cout << "CHAT WITH HER!"<<endl;
	else cout << "IGNORE HIM!"<<endl;
	return 0;
}