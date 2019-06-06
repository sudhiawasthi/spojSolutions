#include<bits/stdc++.h>
#define max 100000
#define ll long long
ll tree[4*max+1];
using namespace std;
ll query(ll node, ll start, ll end, ll l, ll r)
{
    if(r < start||end < l)
    {  // No overlap
        return 0;
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
	
	
	if(first==last)
    {//Base case
    //TOTAL OVERLAP
    //This condition becomes true when we reach leaf node
    tree[root]+=v;//Add v to the root ,the root will be leaf 
    return;       //itself in this case
	}
	if((p<first&&q<first)||(p>last&&q>last))
	{           //NO OVERLAP
		return; //if p and q both lie outside the interval
		            // we end the function call
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
tree[4*max+1]={0};
ll n,c;
cin>>n>>c;
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
