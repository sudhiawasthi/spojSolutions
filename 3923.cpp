#include<bits/stdc++.h>
using namespace std;
int maximum(int a,int b,int c)
{
	return max(max(a,b),c);
}
int main()
{
int t;
cin>>t;
while(t--)
{
int h,w;
cin>>h>>w;
int arr[h][w];
for(int i=0;i<h;i++)
{
	for(int j=0;j<w;j++)
	{
		cin>>arr[i][j];
	}
}
int dp[h][w]={0};
for(int j=0;j<w;j++)
{
	dp[h-1][j]=arr[h-1][j];
}
for(int i=h-2;i>-1;i--)
{
	for(int j=0;j<w;j++)
	{
		if(j==0)
		dp[i][j]=arr[i][j]+max(dp[i+1][j],dp[i+1][j+1]);
		else if(j==w-1)
		dp[i][j]=arr[i][j]+max(dp[i+1][j-1],dp[i+1][j]);
		else
		{
		dp[i][j]=arr[i][j]+maximum(dp[i+1][j-1],dp[i+1][j],dp[i+1][j+1]);
		}
	}
}

int ans=0;
for(int j=0;j<w;j++)
{
if(dp[0][j]>ans)
ans=dp[0][j];
}
cout<<ans<<endl;
}
	
}
