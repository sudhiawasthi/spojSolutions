#include<bits/stdc++.h>
using namespace std;
int main()
{
	float t;
	cin>>t;
	while(t!=0.00)
	{
	 double i=0;
	 float sum=0;
	 while(sum<=t)
	 {
	 i=i+1;
	 sum=sum+ (1/(i+1));
	 }
	 cout<<i<<" card(s)"<<endl;
		cin>>t;
	}
	return 0;
}
