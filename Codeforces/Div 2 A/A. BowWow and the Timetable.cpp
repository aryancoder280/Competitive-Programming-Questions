#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    string s;
    cin>>s;
    int temp = s.size();
    if(temp&1)
    {
        bool ans = false;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                ans=true;
                break;
            }
        }
        if(!ans)
        {
            cout<< temp/2;
        }
        else
            cout<<temp - temp/2<<endl;
    }
    else
        cout<<temp/2<<endl;


}
