#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

//O(N)Solution by finding the maximum P after A

int main()
{
        ll t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            string s;
            cin>>s;
            int ans=0;
            int temp=0;
            bool game=false;
            for(int i=0;i<s.size();)
            {
               // cout<<i<<endl;
                if(s[i]=='A')
                {
                    i++;
                    while(i<n&&s[i]=='P')
                    {
                        temp++;
                        i++;
                    }
                    if(temp>ans)
                        ans += temp-ans;
                    temp=0;
                }
                else
                    i++;
            }
            cout<<ans<<endl;

        }
}
