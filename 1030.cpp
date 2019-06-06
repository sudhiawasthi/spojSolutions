#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
	long long k,ans=0;
	cin>>k;
	if(k%2)
	ans=500*((k/2))+192;
	else
 ans= 500*((k/2)-1)+442;
	cout<<ans<<endl;
}
	return 0;
}
