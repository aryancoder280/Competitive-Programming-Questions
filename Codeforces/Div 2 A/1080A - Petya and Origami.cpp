#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
        ll n,m;
        cin>>n>>m;

        double red = 2*n;
        double green = 5*n;
        double blue = 8*n;
        ll r = ceil(red/m);
        ll g = ceil(green/m);
        ll b = ceil(blue/m);
        ll sum = r + g + b;
        cout<<  sum;
}
