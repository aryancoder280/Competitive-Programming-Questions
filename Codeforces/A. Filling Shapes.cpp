#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

//3*2 can be filled by two ways. So, check if N is even or odd. If it is Odd then we cannot fill the table using given tile so Answer will be 0.
// If N is even then, Find pow(2,n/2) and that will be the answer :)

int main()
{
        ll n;
        cin>>n;
        if(n%2==0)
        {
           ll ans = pow(2,n/2);
            cout<<ans<<endl;
        }
        else
            cout<<0<<endl;
}
