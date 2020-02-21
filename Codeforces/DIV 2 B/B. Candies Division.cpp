// Mathematics only


#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       cout<< (n/k)*k + min(n%k,k/2)<<endl;
    }

}
