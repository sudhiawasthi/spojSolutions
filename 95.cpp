#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int arr[n+1];
		for(int i=1;i<n+1;i++)
		cin>>arr[i];
		stack <int> st;
		vector<int> out;
		out.push_back(0);
	
		for(int i=1;i<n+1;i++)
		{
		//	cout<<"i1 ="<<i<<endl;
		while(arr[i]!=out[out.size()-1]+1 && i<n+1)
		{
		st.push(arr[i]);
		i++;
		//cout<<"i2 ="<<i<<endl;
		}
	
		while(arr[i]==out[out.size()-1]+1 && i<n+1)
		{
		out.push_back(arr[i]);
		i++;
     	//cout<<"i3 ="<<i<<endl;
		}
		//cout<<" last "<<(out[out.size()-1])<<endl;
		//cout<<" current top"<<st.top()<<endl;
		while(!st.empty()&&st.top()==out[out.size()-1]+1)
		{
		out.push_back(st.top());
		st.pop();	
		}
        i--;
    	}
    
        int f=0;
        for(int i=0;i<n+1;i++)
        {
        	if(i!=out[i])
        	{
        		f=1;
        		break;
			}
		}
		if(f==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
		cin>>n;
	}
}
