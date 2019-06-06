#include<bits/stdc++.h>
#define max 2147483647
#define ll long long 
using namespace std;
vector <ll> prime;
vector <ll> morePrime;
void SimpleSieve(ll n)
{ 
	bool isPrime[n+1];
	for(ll i=0;i<=n;i++)
	isPrime[i]= 1;

for(ll i=2;i*i<n;i++)
{   if(isPrime[i])
	for(ll j= i*i;j<n;j+=i)
	{
		isPrime[j]=0;
	}
}

for(ll i=2;i<n;i++)
{
	if(isPrime[i])
	prime.push_back(i);
	}


}

 void SegmentedSieve()
{   
	SimpleSieve(floor(sqrt(max))+1);
	ll limit = floor(sqrt(max))+1;
	ll low = floor(sqrt(max))+1;
	ll high = 2*low;
	while(low<max)
{   
	bool isPrime[limit+1];
	for(ll i=0;i<=limit;i++)
	isPrime[i]= 1;
	
	if(high>=max)
	high=max;
	
        for(ll j=0;j<prime.size();j++)
	{
		ll firstMultiple =floor(low/prime[j])*prime[j];
		if(firstMultiple<low)
		firstMultiple+=prime[j];
		for(ll i=firstMultiple;i<=high;i+=prime[j])
		{  
			isPrime[i-low]=0;
		}
	 } 
	// cout<<"hey1"<<endl;
	 for (ll i = low; i<=high; i++) 
	 {
	 	if(isPrime[i-low])
	 {
		 	morePrime.push_back(i);
		 	// cout<<i<<endl;
		 }
	 }
	 // cout<<"hey2"<<endl;
	
low+=limit;
high+=limit;
}
//cout<<"hey"<<endl;


/*for (ll i = 0; i<morePrime.size(); i++) 
{
	prime.push_back(morePrime[i]);
}*/
}
int main()
{SegmentedSieve();
	int t;
	scanf("%d",&t);
//	SegmentedSieve();
	while(t--)
	{
		ll m,n;
		scanf("%lld%lld",&m,&n);
		if(n<=prime[prime.size()-1])
		{
		for(ll i=0;i<prime.size();i++)
		{
			if(prime[i]>=m && prime[i]<=n)
			printf("%lld\n",prime[i]);
			if(prime[i]>n)
			break;
		}
	
   	}
   	else if(m>=morePrime[0])
   	{	for(ll i=0;i<morePrime.size();i++)
		{
			if(morePrime[i]>=m && morePrime[i]<=n)
			printf("%lld\n",morePrime[i]);
			if(morePrime[i]>n)
			break;
		}
	
	 }
	   else{
        for(ll i=0;i<prime.size();i++)
		{
			if(prime[i]>=m && prime[i]<=n)
			printf("%lld\n",prime[i]);
			if(prime[i]>n)
			break;
		}
		 
		
		for(ll i=0;i<morePrime.size();i++)
		{
			if(morePrime[i]>=m && morePrime[i]<=n)
			printf("%lld\n",morePrime[i]);
			if(morePrime[i]>n)
			break;
		}
	
		}
		
	}
}
