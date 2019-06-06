#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    if(n!=0)
    {
	
	do
	{   
		int ans= (n*(n+1)*(2*n +1))/6;
		cout<<ans<<endl;
		 cin>>n;
			}
			while(n!=0); }
	return 0;
}
