#include<bits/stdc++.h>
using namespace std;
int main()
{
int g,b;
cin>>g>>b;
while(g!=-1&&b!=-1)
{
	
	if(g==0)
	cout<<b<<endl;
	else if(b==0)
	cout<<g<<endl;
	else
	{
		if(b>g)
		{
			cout<<ceil((float)b/(float)(g+1))<<endl;
		}
		else
		{
			cout<<ceil((float)g/(float)(b+1))<<endl;	
		}

	}
cin>>g>>b;
	}	
}
