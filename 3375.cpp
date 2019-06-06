#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int t;
   cin>>t;
 for(int i=1;i<=t;i++)
{   int sum=0;
 	int required,frnds;
 	cin>>required>>frnds;
 	int stamp[frnds];
 	for(int j=0;j<frnds;j++)
 	{
 		cin>>stamp[j];
 		sum+=stamp[j];
	}
//	cout<<"sum "<<sum<<endl;
	cout<<"Scenario #"<<i<<":"<<endl;
	if(sum>=required)
	{
	sort(stamp,stamp+frnds,greater<int>());
	int sum1=0;
	int c=0;
	while(sum1<required)
	{
		sum1+=stamp[c];
		c++;
	}
	cout<<c<<endl;	
	}
	else
	cout<<"impossible"<<endl;
}
}
