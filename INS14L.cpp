#include<bits/stdc++.h>
using namespace std;
int values[100001];
int visited[100001];
int ct;
void print(int u,vector<int> adj[])
{
stack <int> st;
visited[u]=1;
st.push(u);
while(!st.empty())
{   
    int top= st.top();
    ct+=values[top];
	st.pop();
	for(int i=0;i<adj[top].size();i++)
	{
		if(!visited[adj[top][i]])
		st.push(adj[top][i]);
	}
	
}
	
}
void update(int parent,int x,int k,vector<int> adj[])
{
	values[parent]+=x;

	for(int i=0;i<adj[parent].size();i++)
	{
		int child=adj[parent][i];
	    if(!visited[child])
	    update(child,x+k,k,adj);
	}
}
void addEdge(int u,int v,vector<int> adj[])
{
	adj[u].push_back(v);
}
int main()
{
	int n;
	cin>>n;

	ct=0;
	vector<int> adj[n+1];
	for(int i=2;i<=n;i++)
	{
		int parent;
		cin>>parent;
		addEdge(parent,i,adj);
	}
	int m;
	cin>>m;
	while(m--)
	{
		int t,u,x,k;
		cin>>t;
		if(t==1)
	{
			cin>>u>>x>>k;
		    for(int i=0;i<n;i++)
	        visited[i]=0;
			update(u,x,k,adj);
			
	}
		else
		{
			ct=0;
		cin>>u;
		print(u,adj);
		cout<<ct<<endl;
		}
	}
	
}
