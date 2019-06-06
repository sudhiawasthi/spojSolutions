#include<bits/stdc++.h>
#define ll long long
#define m 1000007
using namespace std;
int main()
{   int t;
    cin>>t;
    while(t--)
    {
    ll n;
	cin>>n;
	ll ans;
    ans=3 * ((n * (n + 1))/2) - n;
    
    cout<<ans%m<<endl;
	
	}
	
	
}
