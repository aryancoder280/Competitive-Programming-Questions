#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;

// here we create a Frequency array and stores the rank of the players.
//Time complexity of program is O(N)
// Space complexity of program is O(N) 'cause we create an extra N size array.
int main()
{
       int n;
       cin>>n;
       int arr[n];
       int count[2001]={0,0,0};
       for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            count[arr[i]]++;
        }
        int temp=n;
      int ans[2001]={0,0,0};
      for(int i=1;i<2001;i++)
      {
            temp-=count[i];
            ans[i]=temp+1;
      }
      for(int i=0;i<n;i++)
      {
          cout<<ans[arr[i]]<<" ";

      }
      cout<<endl;


}
