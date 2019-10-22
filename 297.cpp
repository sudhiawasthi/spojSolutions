#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool F(ll x ,ll arr[],int c,int n)
{
   
//We will start placing cows from the first stall and check if the next stall can be
//used on not
 
int last=arr[0],cows=1;
for(int i=1;i<n;i++)
{
if(arr[i]-last>=x)
{
    last=arr[i];
    cows++;
    if(cows==c)
    return 1;
}
}
return 0;
}
 
int main()
{ int t;
cin>>t;
while(t--)
{  int n,c;
cin>>n>>c;
ll arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
sort(arr,arr+n);
ll mingap = 0;
ll maxgap= arr[n-1]-arr[0]+1;
 
while(mingap<maxgap)
{
    ll mid = (mingap+maxgap+1)/2;
    if(F(mid,arr,c,n))
    mingap=mid;
    else 
    maxgap=mid-1;
}
cout<<mingap<<endl;
 
}
} 
