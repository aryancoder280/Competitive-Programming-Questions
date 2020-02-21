#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
      ll n;
      cin>>n;
      string s;
      cin>>s;
      ll sum=0;
      for(ll i=0;i<n;i++)
      {
          if((s[i]-'0')%2 == 0)
          {
              sum = sum + i+1;
          }
      }
      cout<<sum<<endl;

}
