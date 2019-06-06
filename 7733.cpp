#include<bits/stdc++.h>
#define ll long long
using namespace std;
int ans;
vector<int> sums;
int breaks(int n)
{   ans++;
     //cout<<" the sum for"<<n<<"is ";
    int sum; 
    int temp=n;
    for (sum = 0; temp > 0; sum += (temp % 10)*(temp % 10), temp /= 10);
 //   cout<<sum<<endl;
    
	int f=0;
    for(int i=0;i<sums.size();i++)
	{
	if(sums[i]==sum)
	{
		f=1;
		break;
		}	
	} 
	if(f==1)
	return -1;
	sums.push_back(sum);
    if(sum==1)
    	return 1;
	
	else
		breaks(sum);
	
	
 	
	
}
int main()
{
	ll n;
	scanf("%d",&n);
	ans=0;
	sums.push_back(n);
	int s= breaks(n);
//	for(int i=0;i<sums.size();i++)
//	cout<<sums[i]<<endl;
	if(s==-1)
	cout<<s<<endl;
	else
    printf("%d\n",ans);
	
	
}
