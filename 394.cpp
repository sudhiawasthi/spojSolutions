#include<bits/stdc++.h>  //DP
using namespace std;
int main()
{
	string n;
	cin>>n;
	while(n!="0")
	{
		int arr[n.length()];
		arr[0]=1;
		if((n[0]=='1'||(n[0]=='2'&&(int)n[1]<55))&&n[1]!='0')
		arr[1]=2;
		else
		arr[1]=1;
		for(int i=2;i<n.length();i++)
		{    
		if(n[i]=='0'&&(n[i-1]=='2'||n[i-1]=='1'))
		{
			arr[i]=arr[i-2];
		}
		else if(n[i]=='0'&&(n[i-1]!='2'&&n[i-1]!='1'))
		{
			arr[i]=0;
		}
		else if(n[i-1]=='1'||(n[i-1]=='2'&&(int)n[i]<55))
		{
		arr[i]=arr[i-1]+arr[i-2];	
		}
		else
		arr[i]=arr[i-1];
		}
		cout<<arr[n.length()-1]<<endl;
		cin>>n;
	}
}
