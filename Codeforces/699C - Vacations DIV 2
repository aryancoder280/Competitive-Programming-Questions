#include<bits/stdc++.h>
#define ss second
#define ff first
using namespace std;
typedef long long int ll;
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];

}
bool game=false,contest=false;
int lazy=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==0)
    {
        game=contest=false;
        lazy++;
    }
    else if(arr[i]==1)
    {
        if(contest==true)
        {
            contest=game=false;
            lazy++;
        }
        else
        {
            contest=true;
            game=false;
        }
    }
    else if(arr[i]==2)
    {
        if(game==true)
        {
            game=contest=false;
            lazy++;
        }
        else
        {
            game=true;
    contest=false;
        }
    }
    else
    {
        if(game==false&&contest==false)
        {
            continue;
        }
        else if(game)
        {
            contest=true;
            game=false;
        }
        else if(contest)
        {
            contest=false;
            game=true;
        }
    }
}
cout<<lazy<<endl;

}
