#include<bits/stdc++.h>
using namespace std;
int n;
/*int LCS(int i,int j,string s1,string s2)
{   

This is the recursive approach

    if(i==n||j==n)
    return 0;
    
	if(s1[i]==s2[j])
	return 1+LCS(i+1,j+1,s1,s2);
	
	else
	return max(LCS(i,j+1,s1,s2),LCS(i+1,j,s1,s2));
}*/
int main()
{  
int t;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	string str = s;
    reverse(str.begin(), str.end());
	n=s.length();
	int LCS[n+1][n+1];
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<n+1;j++)
		{
			if(i==0||j==0)
			LCS[i][j]=0;
			
			else if(s[i-1]==str[j-1])
			{
				LCS[i][j]=1+LCS[i-1][j-1];
			}
			else if(s[i-1]!=str[j-1])
			{
			LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);	
			}
		}
	}
	

	cout<<n-LCS[n][n]<<endl;
}
} 
