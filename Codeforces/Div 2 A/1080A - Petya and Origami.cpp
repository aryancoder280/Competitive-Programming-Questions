#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
        int n,m;
        cin>>n>>m;

        double red = 2*n;
        double green = 5*n;
        double blue = 8*n;
        cout<< ceil(red/m) + ceil(green/m) + ceil(blue/m);
}
