#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ct=0;
for(int i=1;i<=n;i++)
{
	for(int j=1;j*j<=i;j++)
	{
		if(i%j==0)
		ct++;
	}
}
cout<<ct<<endl;	
}
