#include <iostream>

using namespace std;

int main()
{
	char N[100];
	cin >> N;
	int i=0;
	while (N[i] != '\0')
	{
		switch (N[i])
		{
		  case 'H':
		  case 'Q':
		  case '9':
			cout << "YES";
			return 0;
		}
		i++;
	}
	cout << "NO";
	return 0;
}