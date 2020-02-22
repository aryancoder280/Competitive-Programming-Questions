#O(N) complexity
imp all numbers that are of 4^k form exist only on odd number of index when indexing is from 1.
#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    string s;
    cin>>s;
    int ind = -1;
    int last = s.size()-1;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]<s[last] && (s[i]-'0')%2==0)
        {
            ind = i;
            break;
        }
        else if(s[i]>s[last] && (s[i]-'0')%2==0)
        {
            ind = i;
        }
    }
    if(ind!=-1)
    {
        swap(s[ind],s[last]);
        cout<<s<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
