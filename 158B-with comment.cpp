#include <iostream>

using namespace std;

int main()
{
	int n, amount[4]={};
	cin >> n;
	int s[n];
	//for (int i=0; i < n; i++) cin >> s[i];
	for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    if(c==4)
        amount[3]++;
    else
        amount[c-1]++;
  }
  
	
	cout << endl;
	for (int i=0; i < 4; i++) cout << amount[i] << " ";
	cout << endl;
	int sisa=0;
	if(amount[1]%2==0 && amount[1]!=0)
	{
		amount[3]+=(amount[1]/2);
		amount[1]=0;
		cout << "Case 1: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
	}
	else if(amount[1]%2!=0 && amount[1]!=0)
	{
		amount[3]+=(amount[1]/2);
		amount[1]=1;
		cout << "Case 1: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
	}
	if (amount[2]<=amount[0])
	{
		amount[3] += amount[2];
		//cout << amount[3] << endl;
		amount[0] -= amount[2];
		amount[2] = 0;
		cout << "Case 2: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
		if (amount[0]<3 && amount[1] ==1 && amount[0] !=0)
		{
			amount[3]++;
			amount[0] = 0;
			amount[1] = 0;
			cout << "Case 2a: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
		}
		else if (amount[0]<3 && amount[1] ==0 && amount[0] !=0) 
		{
			if (amount[0] == 1)	amount[0] = 1;
			else 
			{
				amount[0] =0;
				amount[1] = 1;
			}
			cout << "Case 2b: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
		}
		else if (amount[0]>=3 && amount[1] ==1)
		{
			amount[0] -= 2;
			amount[1] = 0;
			amount[3]++;
			if(amount[0]%4 == 0)
			{
				
				amount[3] += (amount[0]/4);
				amount[0] = 0;
				cout << "Case 2c: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
			}
			else
			{
				amount[3] += (amount[0]/4);
				amount[amount[0]%4-1] = 1;
				cout << "Case 2c: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
			}
		}
		else 
		{
			if(amount[0]%4 == 0)
			{
				amount[3] += (amount[0]/4);
				amount[0] = 0;
				cout << "Case 2d: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
			}
			else
			{
				amount[3] += (amount[0]/4);
				amount[amount[0]%4-1] = 1;
				cout << "Case 2d: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
			}
		}
	}
	else if(amount[0]!=0)
	{
		amount[3] += (amount[2]-amount[0]);
		amount[2] -= amount[0];
		amount[0] = 0;
		cout << "Case 2: "<< amount[0] << amount[1] << amount[2] << amount[3] << endl;
	}
	
	cout << endl<<amount[0]+amount[1]+amount[2]+amount[3];
	return 0;
}
