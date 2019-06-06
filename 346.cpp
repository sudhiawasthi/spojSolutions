#include<bits/stdc++.h> //DYNAMIC PROGRAMMING
#define ll long long 
#define M 1000000000
using namespace std;

vector <ll> arr(1000000001);
ll coins(ll n)
{    
    if(n==0)
    return n;
    if(!arr[n])
    arr[n]=max(n,coins(n/2) + coins(n/3) + coins(n/4));
	return arr[n];
	
}
int main()
{   
	ll n;
	// WE HAVE NOT CALCULATED FOR ALL UPTO N
	//IT WILL GIVE TLE
	//We will use memoization + recursion
	// we will produce result only if it is not present 
	while(scanf("%lld",&n)!=EOF)
	{
printf("%lld\n",coins(n));
	}
	
	
}
