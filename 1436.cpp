#include<bits/stdc++.h>
using namespace std;
void DFSUtil(vector <int> adj[],int u,vector<bool> &visited)
{ //cout<<" here   "<<endl;
	 visited[u] = true; 
    for (int i=0; i<adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil( adj,adj[u][i], visited);
		
}

void addEdge(vector <int> adj[],int u,int v)
{
	adj[u].push_back(v); 
    adj[v].push_back(u); 
}
int main()
{
int n,m;
cin>>n>>m;
vector <int> adj[n+1];
for(int i=0;i<m;i++)
{
int u,v;
cin>>u>>v;
addEdge(adj,u,v);
}
if(m!=n-1)
cout<<"NO\n";
else
{
vector <bool> visited(n+1,false);
DFSUtil(adj,1,visited);
int f=0;
for(int i=1;i<=n;i++)
{
if(visited[i]==false)
{
	f=1;
	break;
}
}
if(f==0)
cout<<"YES\n";
else
cout<<"NO\n";
}

	
}
