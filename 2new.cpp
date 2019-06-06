#include<bits/stdc++.h>
using namespace std;
void sieve(int limit,vector<int> &prime)
{
	bool mark[limit+1];
	memset(mark,true,sizeof(mark));
    for(int i=2;i*i<=limit;i++)
   { if(mark[i]==true)
    {for(int j=i*i;j<=limit;j+=i)
    mark[j]=false; }}
    	for(int i=2;i<=limit;i++)
    	{
    		if(mark[i]==true)
    		{prime.push_back(i);
			 	 }
		}
}
void segmented(int n,int m)
{
	int limit=floor(sqrt(n));
	vector<int> prime;
	sieve(limit,prime);
	int low=m; int high=n;
		bool mark[n-m+1];
		memset(mark, true, sizeof(mark));
		for(int i=0;i<prime.size();i++)
		{
			int lolim= floor(low/prime[i])*prime[i];
			if(lolim<low)
			lolim+=prime[i];
			for(int j=lolim;j<=high;j+=prime[i])
			mark[j-low]=false;
    	}
    	for(int i=low;i<=high;i++)
    {
		if(mark[i-low]==true)
    	cout<<i<<endl; }
	}



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m>>n;
        segmented(n,m);   	
	}
    return 0;
}

