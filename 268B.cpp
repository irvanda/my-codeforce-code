#include <iostream>

using namespace std;

int deret(double x)
{
	return x/2*(2+(x-1));
}

int main()
{
	double n;
	cin >> n;
	int sum = deret(n);
	for(double i=n-1; i>=2; i--) sum+=deret(n-i);
	cout << sum;
	return 0;
}