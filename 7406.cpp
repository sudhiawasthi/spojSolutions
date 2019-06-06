#include<bits/stdc++.h>
using namespace std;
int main()
{  
int n;
cin>>n;
while(n!=-1)
{
	int temp= n-1;
	for(int i=0;temp>0;i++)
	{
		temp=temp-((6*i));
	//	cout<<temp<<endl;
	}
	if(temp==0)
	cout<<"Y"<<endl;
	else
	cout<<"N"<<endl;
	cin>>n;
}
} 
