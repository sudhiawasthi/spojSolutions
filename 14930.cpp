#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
    for(int i=1;i<=t;i++)
	{
		long long n;
		cin>>n;
		if(n==0)
		{
		cout<<"Case "<<i<<": 0"<<endl;
		continue;
	    }
		long long coins[n];
		for(int i=0;i<n;i++)
		cin>>coins[i];
		long long incl[n];
		long long excl[n];
		
		incl[0]=coins[0];
		excl[0]=0;
		
		for(int i=1;i<n;i++)
		{
			incl[i]=excl[i-1]+coins[i];
			excl[i]=max(incl[i-1],excl[i-1]);
		}
		
		cout<<"Case "<<i<<": "<<max(incl[n-1],excl[n-1])<<endl;
	}
}
