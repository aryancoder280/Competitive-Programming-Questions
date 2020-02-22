#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    int n,val;
    cin>>n>>val;
    set<int>s;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        bool y = false;
        for(int j=0;j<x;j++)
        {
            int num;
            cin>>num;
            if(!y&&num<val)
            {
                y=true;
               s.insert(i+1);
                
            }
        }
    }
    cout<<s.size()<<endl;
    for(auto j = s.begin(); j!=s.end(); j++)
    {
        cout<<*j<<" ";
    }
}
