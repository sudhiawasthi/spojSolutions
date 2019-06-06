#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
	string blank;
	getline(cin,blank);
	
	long long n;
	cin>>n;
	long long sum=0;
	long long arr[n];
    for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum%n+(arr[i]%n);
		sum=sum%n;
	}
	if(sum%n ==0)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;	
    }
}
