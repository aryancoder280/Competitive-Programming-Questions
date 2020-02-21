Simple implementation based problem


#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    int n,k;
    cin>>n>>k;
    queue<int>q;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(q.empty())
        {
            q.push(x);
            mp[x]=1;
        }
        else
        {
            if(q.size()==k)
            {
                if(mp.find(x)==mp.end())
                {
                    mp[q.front()]--;
                    q.pop();
                    q.push(x);
                    mp[x]=1;
                }
                else
                {
                    if(mp[x]==0)
                    {
                            mp[q.front()]--;
                            q.pop();
                            q.push(x);
                            mp[x]=1;
                    }
                }
            }
            else
            {
                if(mp.find(x)==mp.end())
                {
                    q.push(x);
                    mp[x]=1;
                }
                else
                {
                    if(mp[x]==0)
                    {
                        q.push(x);
                        mp[x]=1;
                    }
                }
            }
        }
    }
    cout<<q.size()<<endl;
    vector<int>v;
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
        
    }
    for(int i=v.size()-1;i>=0;i--)
    cout<<v[i]<<" ";
}
