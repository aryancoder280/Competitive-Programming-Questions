//Top Down approach
#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;


int main()
{
       int n,k,d;
       cin>>n>>k>>d;
       int arr[n+1][2];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<2;j++)
            arr[i][j]=0;
    }
       bool visited=0;
       arr[0][1]=1;
       for(int i=1;i<=n;i++)
       {
           //if visited == false
           for(int j=1;j<=min(k,i);j++)
           {
               if(j>=d)
               {
                   arr[i][0] = (arr[i][0] + arr[i-j][1])%M;
               }
               else
               {
                   arr[i][0] = (arr[i][0] + arr[i-j][0])%M;
               }
           }
           // if visited == true
           for(int j=1;j<=min(k,i);j++)
           {
               arr[i][1] = (arr[i][1] + arr[i-j][1])%M;
           }
       }
       cout<<arr[n][0]%M<<endl;
}
