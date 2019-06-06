#include<bits/stdc++.h>  //DYNAMIC PROGRAMMING
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

int k;
cin>>k;
int max=-1;
int positionMax=-1;

vector<int> maxs;
for(int i=0;i<n-k+1;i++)
{ 
	if(positionMax<i)
	{//cout<<i<<"  is i "<<endl;
		int Cmax=-1;
            int CpositionMax=-1;
		for(int j=i;j<i+k;j++)
		{
	
			if(arr[j]>Cmax)
			{
				Cmax= arr[j];
				CpositionMax= j;
			}
		}
		max=Cmax;
		positionMax=CpositionMax;
	}
	
    else if(max<arr[i+k-1])
    {
    	max =arr[i+k-1];
    	positionMax=i+k-1;
	}
	
	maxs.push_back(max);
}
for(int i=0;i<maxs.size();i++)
{
	cout<<maxs[i]<<" ";
	}
	cout<<"\n";	
}
