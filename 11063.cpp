#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll third,lastThird,sum;
		cin>>third>>lastThird>>sum;
		ll n=(2*sum)/(third+lastThird);
		ll d=(lastThird-third)/(n-5);
		ll a=third-2*d;
		cout<<n<<endl;
		for(ll i=0;i<n;i++)
		{
			cout<<a+i*d<<" ";
		}
		cout<<endl;
	}
}

