#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int c;
	cin>>c;
	while(c)
	{

		string s;
		cin>>s;
	//	cout<<s<<endl;
		for(int i=0;i<c;i++)
		{
			cout<<s[i];
		int	index=2*c;
			while(index+i<s.length())
     	{
		cout<<s[index-i-1]<<s[index+i];	
		index=index+2*c;
		
		}
		while(index-i-1<s.length())
		{
			cout<<s[index-i-1];	
				index=index+2*c;	
		}
		}
		cout<<endl;
		cin>>c;
	}
}
