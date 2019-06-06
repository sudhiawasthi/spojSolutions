#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
	int x,y;
	cin>>x>>y;
	int ans=0;
	if(x==y)
	{
		if(x%2==0)
		ans = x + y;
		else
		ans = x + y - 1;
		
		cout<<ans<<endl;
	}
  else if(x-y==2)
	{
	if(x%2==0)
		ans = x + y;
		else
		ans = x + y - 1;
		
		cout<<ans<<endl;	
	}
	else
	cout<<"No Number"<<endl;
	
		
	}
	return 0;
}
