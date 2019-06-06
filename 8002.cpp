#include<bits/stdc++.h>
#define max 100000
#define ll long long
ll tree[4*max+1];
ll lazy[4*max+1];
using namespace std;
ll query(ll node, ll start, ll end, ll l, ll r)
{
    if(r < start||end < l or start>end)
    {  // No overlap
        return 0;
    }
    if(lazy[node]!=0)
    {
    	tree[node]+=(end-start+1)*lazy[node];
    	if(start!=end)
    	{
    		lazy[2*node]+=lazy[node];
    	    lazy[2*node+1]+=lazy[node];	
		}
		lazy[node]=0;
	}
    if(l <= start && end <= r)
    { //Total overlap
        return tree[node];
    }
    ll mid = (start + end) / 2;
    ll p1 = query(2*node, start, mid, l, r);
    ll p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

void update(ll root,ll first,ll last,ll p,ll q,ll v)
{	
	if(lazy[root]!=0)
	{   //The number of leaf nodes corresponding to a root is 
	//(last-first+1),so we updatde the node by adding
		tree[root]+=(last-first+1)*lazy[root];
		//pending updatee
		if(first!=last)
		{
			//if the node is not the leaf node,update its
			//children in the lazt tree
			lazy[2*root]+=lazy[root];
			lazy[2*root +1]+=lazy[root];
		}
		lazy[root]=0;
	}
	if(q<first||p>last||first>last)
	{           //NO OVERLAP
		return; //if p and q both lie outside the interval
		            // we end the function call
	}
	if(p<=first and q>=last)
	{ //if we reach a node which encloses p and q
	// we stop recursing and return
		tree[root]+=(last-first+1)*v;
		//requested update
		if(first!=last)
		{//update the children in the lazy tree
		//i,e, now children have a pending update
			lazy[2*root]+=v;
			lazy[2*root +1]+=v;
		}
		return;
	}
	
ll mid=(first+last)/2;

update(2*root,first,mid,p,q,v);//for left
update(2*root+1,mid+1,last,p,q,v);//for right

tree[root]=tree[2*root]+tree[2*root+1];
}
int main()
{  
   ll t;
   cin>>t;
 while(t--)
{   
ll n,c;
cin>>n>>c;
for(int i=0;i<=4*n;i++)
{
	tree[i]=0;
	lazy[i]=0;
}
while(c--)
{
bool k;
cin>>k;
if(k==0)
{
	ll p,q,v;
	cin>>p>>q>>v;
    update(1,1,n,p,q,v);
	
}	
else
{
	ll p,q;
	cin>>p>>q;;
	cout<<query(1,1,n,p,q)<<endl;
}
}
}
}
