#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	int ans =0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		ans^=arr[i];
	}
    printf("%d\n",ans);
	
	
}
