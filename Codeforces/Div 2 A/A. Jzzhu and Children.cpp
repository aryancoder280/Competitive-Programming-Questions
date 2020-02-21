#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
    int n,m;
    cin>>n>>m;
    int student = 0,max=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        int round = ceil(float(x)/m);
        if(round>=max)
        {
            max=round;
            student=i+1;
        }

    }
    cout<<student<<endl;
}
