#include<bits/stdc++.h>
using namespace std;
unsigned long long SortAndCountSplitInv(vector<unsigned long long> &left,vector<unsigned long long> &right,unsigned long long lsize,unsigned long long rsize,vector<unsigned long long>&a)
{
	 unsigned long long inv=0;
	vector<unsigned long long> sorted(lsize+rsize);
	unsigned long long lp=0;
	unsigned long long rp=0;
	unsigned long long i=0;
	while(lsize>lp && rsize>rp)
	{
		if(left[lp]<right[rp])
		{
			sorted[i]=left[lp];
			lp++;
		}
		else if(right[rp]<left[lp])
		{
			sorted[i]=right[rp];
			rp++;
			inv=inv+lsize-lp;
		}
		i++;
	}
	while(lp<lsize)
	{
		sorted[i]=left[lp];
		lp++;
		i++;
	}
	while(rp<rsize)
	{
		sorted[i]=right[rp];
		i++;
		rp++;
	}
 a= sorted;	
 
	return inv;
}
unsigned long long CountInv(vector<unsigned long long> &a,unsigned long long n)
 { 
   if(n==1) return 0;
	unsigned long long mid=n/2;
vector<unsigned long long> left(mid);
vector<unsigned long long> right(n-mid);
	for(unsigned long long i=0;i<mid;i++)
    {
	left[i]=a[i];
//	cout<<"left"<<left[i]<<"\t";
    }
	for(unsigned long long i=mid;(i-mid)<(n-mid);i++)
	{
		right[i-mid]=a[i];
	//	cout<<"\nright"<<right[i-mid]<<"\t";
	}
	unsigned long long x= CountInv(left,mid); //cout<<x<<" is x"<<endl;
	unsigned long long y = CountInv(right,n-mid);// cout<<y<<" is y"<<endl;
	unsigned long long z = SortAndCountSplitInv(left,right,mid,n-mid,a);// cout<<z<<" is z"<<endl;
	return x+y+z;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long n;
		cin>>n;
	vector <unsigned long long>a(n);
		for(unsigned long long i=0;i<n;i++)
		cin>>a[i];
		cout<<CountInv(a,n)<<endl;
	}
	 return 0;
	 
}
