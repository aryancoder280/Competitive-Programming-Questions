#include <bits/stdc++.h>
#define M 1000000007
using namespace std;
typedef long long int ll;

int fun(int x,int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x && abs(arr[i]-x)>k)
            return 2;
        else if(arr[i]>x && abs(arr[i]-x)>k)
            return -1;

    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int prev = arr[0]+k;
        int right = arr[0] + k;
        bool ans=true;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=right && arr[i]>prev)
            {
                prev = arr[i];
            }
            else if(arr[i]>right)
            {
                arr[i]-=k;
                if(arr[i]>right)
                {
                    ans=false;
                    break;
                }
                else
                {
                    if(arr[i]>prev)
                        prev = arr[i];
                }
            }
        }
        if(ans)
        cout<<prev<<endl;
        else
            cout<<-1<<endl;
    }
}
