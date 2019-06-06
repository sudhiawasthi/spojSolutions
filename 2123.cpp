#include<bits/stdc++.h> //DETECTING BIPARTITE GRAPH
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n!=-1)
	{ 
	    int arr[n];
	    int sum=0;
	    int diff[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum%n!=0)
		cout<<"-1"<<endl;
		else
		{
			int r= sum/n;
			for(int i=0;i<n;i++)
			{
				diff[i]=arr[i]-r;
			}
			int sump=0,sumn=0;
			for(int i=0;i<n;i++)
			{
				if(diff[i]>0)
				sump+=diff[i];
				else
				sumn+=(-1*diff[i]);
			}
			cout<<min(sump,sumn)<<endl;
		}
		cin>>n;
		
		
	}
}
