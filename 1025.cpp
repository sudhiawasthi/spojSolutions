#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   unsigned int sum=0;
		int n;
		cin>>n;
		int m[n],w[n];
		for(int i=0;i<n;i++)
		cin>>m[i];
		for(int i=0;i<n;i++)
		cin>>w[i];
		sort(w,w+n);
		sort(m,m+n);
		for(int i=0;i<n;i++)
		{
		sum+=(w[i]*m[i]);	
		}
		cout<<sum<<endl;
		
	}
	return 0;
}
