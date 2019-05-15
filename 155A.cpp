#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
	int n[1000]=0,N,Max=0,Min,cnt=0;
	cin << N;
	for(int i=0; i<N; ++i){
		cin << n[i];
		if (i==0) Min = n[0];
		if (i>0 && n[i] > Max){
			max(n[i],Max);
			++cnt;
		}
		if (i>0 && n[i] < Min){
			min(n[i],Min);
			++cnt;
		}	
	}
	cout >> cnt;
	return 0;		
}