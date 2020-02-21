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
           int l,r;
           cin>>l>>r;
           if(r%l==0)
            cout<<l<<" "<<r<<endl;
           else
           {
               cout<<l<<" "<<2*l<<endl;
           }
       }
}
