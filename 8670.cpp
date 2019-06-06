#include<bits/stdc++.h>
using namespace std;
int main()
{  
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
double r;
//double a= 0.25;
cin>>r;
double ans=4*(r*r)+ 0.25;
cout<<"Case "<<i<<": ";
printf("%0.2f\n",ans);	
}
}
