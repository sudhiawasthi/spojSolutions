#include<bits/stdc++.h>
using namespace std;
int reverse(int a)
{
	int rev=0,r=0;
	while(a!=0)
	{
		r=a%10;
		rev=10*rev +r;
		a=a/10;
	}
	return rev;
}
int main()
{  int n;
cin>>n;
while(n--)
{
	int a,b;
		int sum=0;
	cin>>a>>b;
	a=reverse(a);
	b=reverse(b);
    sum=a+b;
    sum=reverse(sum);
    cout<<sum<<endl;
	
}
	return 0;
}
