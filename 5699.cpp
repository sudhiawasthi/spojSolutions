#include<bits/stdc++.h>
using namespace std;
int Binaryexponentiation(int a,long long b)
{
	if(b==0)
	return 1;
	
	if(b==1)
	return a;
	
	int res=1;
	while(b>0)
	{
		if(b & 1) //odd
		res=(res*a)%10;
		
		b=b>>1;
		a=(a*a)%10;
	}
	
	return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	 string a;
	 long long b;
	 cin>>a>>b;
	 int d= a[a.length()-1]-'0';
	
	cout<< Binaryexponentiation(d,b)<<endl;
	}
	return 0;
}
