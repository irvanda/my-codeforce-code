#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	long long a;
	cin >> a;
	long long U=0,Un=0;
	long long n=1;
	
	while (a > 5)
	{
		if(U>a) {n--;break;}
		Un = U;
		U = U + (pow(2,(n-1))*5);
		//cout << "U = " << U << endl;
		n++;
	}
	//cout << Un << endl;
	Un = a-Un;
	//cout << Un << ' ' << n << endl;
	if (a >5) a = (Un+pow(2,(n-1)))/(pow(2,(n-1)));
	if (a==1) cout << "Sheldon";
	else if (a==2) cout << "Leonard";
	else if (a==3) cout << "Penny";
	else if (a==4) cout << "Rajesh";
	else cout << "Howard";
	return 0;
}
	
	