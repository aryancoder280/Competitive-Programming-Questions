#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    string s,t;
    cin>>s>>t;
    int ind=0;
    for(int i=0;i<t.size();i++)
    {
        if(s[ind]==t[i])
        {
            ind++;
        }
    }
    cout<<ind+1<<endl;
}
