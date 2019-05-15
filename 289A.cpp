#include <iostream>
#include <string>
#include <Cmath>
#include <algorithm>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long t = 0;
    for(long long i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        t += (b-a)+1;
    }
    cout << t << " " << k<<endl;
    long long r = t % k;
    if (r==0) {
        cout << r << endl;
    }
    else {
        cout << k-r << endl;
    }

    return 0;
}