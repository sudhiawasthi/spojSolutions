#include<bits/stdc++.h>
using namespace std;
string a,b;
int min(int a,int b,int c)
{
	return min(min(a,b),c);
}
int edit(string a,string b,int al,int bl){
int dp[al+1][bl+1];
	for(int i=0;i<=al;i++)
	{
		for(int j=0;j<=bl;j++)
		{
			if(i==0)
			dp[i][j]=j; // INserting all in the other one
			
			else if(j==0)
			dp[i][j]=i;
			
			else if(a[i-1]==b[j-1])
			dp[i][j] = dp[i-1][j-1];
			
			else
			dp[i][j]= 1+ min(dp[i][j-1],  
                                   dp[i-1][j], 
                                   dp[i-1][j-1]); 
		}
	}
/*	for(int i=0;i<=al;i++)
	{
		for(int j=0;j<=bl;j++)
		{
		 cout<<dp[i][j]<<" ";	
		}
		cout<<endl;
	}*/
	return dp[al][bl];
}
int main()
{
	int t ;
    cin>>t;
	while(t--)
	{
	cin>>a>>b;
	cout<<edit(a,b,a.length(),b.length())<<endl;
	}
}
