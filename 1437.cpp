#include<bits/stdc++.h>
using namespace std;
pair<int,int> bfs(int start,int visited[],vector<int> adjList[],int n)
{   
    queue <int> q;
    for(int i=0;i<n+1;i++)
    visited[i]=0;
    int depth[n+1]={0,0};
	visited[start]=1;
	q.push(start);
//	cout<<start<<" is pushed"<<endl;
	int first;
	while(!q.empty())
	{
	    first= q.front();
		q.pop();
	//	cout<<first <<" is popped"<<endl;
		for(int i=0;i<adjList[first].size();i++)
		{
			int child =adjList[first][i];
			if(!visited[child])
			{
			depth[child]=depth[first]+1;
			visited[child]=1;
        	q.push(child);	
        //	cout<<child<<" is pushed"<<endl;
			}
		}
	}
	pair<int,int> p;
	p.first=first;
	p.second=depth[first];
	return p;
	
}
void addEdge(int u,int v,vector<int> adjList[])
{
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}
int main()
{
int n;
cin>>n;
vector<int> adjList[n+1];
int visited[n+1];

for(int i=0;i<n-1;i++)
{
	int u,v;
	cin>>u>>v;
	addEdge(u,v,adjList);
}
/*for(int i=1;i<n+1;i++)
{
	for(int j=0;j<adjList[i].size();j++)
	cout<<adjList[i][j]<<" ";
	cout<<"\n";
}*/
pair<int,int> p = bfs(1,visited,adjList,n);
//cout<<" p first"<<p.first<<endl;
pair<int,int> p1 =bfs(p.first,visited,adjList,n);
cout<<p1.second<<endl;
}
