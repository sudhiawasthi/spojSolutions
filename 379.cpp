#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t ;
    cin>>t;
	while(t)
	{
		
		int input[t+1];
		input[0]=0;
		for(int i=1;i<=t;i++)
		cin>>input[i];
		int inversion[t+1];
	    inversion[0]=0;
	    for(int i=1;i<=t;i++)
	    inversion[input[i]]=i;
	    int i;
	    for(i=1;i<=t;i++)
	    {
	    	if(inversion[i]!=input[i])
	    	{
	    		cout<<"not ambiguous"<<endl;
	    		break;
			}
		}
		if(i==t+1)
		cout<<"ambiguous"<<endl;
		cin>>t;
	}
}
