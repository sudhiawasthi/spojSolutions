#include<bits/stdc++.h> //DETECTING BIPARTITE GRAPH
using namespace std;
bool isBipartite(int start,int n,vector<int> adjList[],int visited[])
{  //cout<<"here"<<endl;

	stack <int> st;
	
	visited[start]=1;
	st.push(start);
	while(!st.empty())
	{
		int top=st.top();
		st.pop();
		for(int i=0;i<adjList[top].size();i++)
		{
			int child=adjList[top][i];
			if(visited[child]==0)
			{
			 visited[child]=3-visited[top];
	         st.push(child);
			}
			else if(visited[child]==visited[top])
			{
				return 0;
			}
		}
	}
	return 1;
	
}
void addEdge(int u,int v,vector<int> adjList[])
{
	adjList[u].push_back(v);
	adjList[v].push_back(u);
}
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		int n,e;
		// no.of bugs is nodes
		//no. of interactions is edges
		cin>>n>>e;
			vector<int> adjList[n+1];
				int visited[n+1];
	for(int i=0;i<n+1;i++)
	visited[i]=0;
		for(int i=0;i<e;i++)
{
	int u,v;
	cin>>u>>v;
	addEdge(u,v,adjList);
}
	int i;
	bool flag;
    cout<<"Scenario #"<<j<<":"<<endl;
	for(i=1;i<n+1;i++)
	{ //Since,there maybe more than one connected
	// components in the graph
	//We run dfs in the loop so thar all connected
	// components are covered
		if(!visited[i])
		{
		flag=isBipartite(i,n,adjList,visited);
	//	cout<<flag<<endl;
		if(!flag)
        {
		cout<<"Suspicious bugs found!"<<endl;
		break;
	     }
	     else
	     continue;
		}
	}
 if(flag==1)
	cout<<"No suspicious bugs found!"<<endl;
		
	}
}
