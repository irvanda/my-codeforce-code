#include <iostream>

using namespace std;

int main()
{
	char word[100];
	cin >> word;
	int up=0, low=0, i=0;
	while(word[i]!='\0')
	{
		if((int)word[i]>96) low++;
		else up++;
		i++;
	}
	
	if ((int)word[0]>96 && (int)word[1]<91 &&low==1 || (int)word[0]<91 && (int)word[1]<91 && low ==0) 
	{
		int i=0;
		while(word[i]!='\0')
		{
			if((int)word[i]>96) word[i] = (char)toupper(word[i]);
			else word[i] = (char)tolower(word[i]);
			i++;
		}
	}
	cout << word;
	return 0;
}