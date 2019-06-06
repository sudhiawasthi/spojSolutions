#include<bits/stdc++.h>
using namespace std;
int KP[101][501];
int main()
{  
int budget,n;
cin>>budget>>n;
while(budget!=0&&n!=0)
{
int fee[n],fun[n];
for(int i=0;i<n;i++)
{
	cin>>fee[i]>>fun[i];
}

	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<budget+1;j++)
		{
			if(i==0||j==0)
			KP[i][j]=0;
			
			else if (fee[i-1]>j)
			{
				// if fees is more than current budget
				//then just take the value without ith item
				KP[i][j]=KP[i-1][j];
			}
			else if(fee[i-1]<=j)
			{
				//COnsider both taking an item and not taking it
				//Choose the one with maximum fun
				KP[i][j] = max(fun[i-1]+KP[i-1][j-fee[i-1]],KP[i-1][j]);

			}
		}
	}
   int party=0;
   //Since it is 1/0 Knapsack,the sum of fee 
   //would be an integer from 1-budget
   //it would be the very first one which has the value equal to
   //maximum value
	for(int j=0;j<budget;j++)
	{
		if(KP[n][j]==KP[n][budget])
		{
			party=j;
			break;
		}
	}
	 
	cout<<party<<" "<<KP[n][budget]<<endl;
	cin>>budget>>n;
	
}

} 
