#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,a3;
	cin>>a1>>a2>>a3;
	while(a1||a2||a3)
	{
		if((a2*2)==(a3+a1))
			cout<<"AP"<<" "<<(a3+(a3-a2))<<endl;
			else
			 { int r=(a3*a3)/a2;
			cout<<"GP"<<" "<<r<<endl;
		}
		cin>>a1>>a2>>a3;
	}
	return 0;
}
