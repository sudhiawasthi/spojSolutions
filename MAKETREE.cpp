#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n+1] ={};
    for(int i=1;i<=k;i++)
    {
        int w;
        cin>>w;
        while(w--)
        {
            int wi;
            cin>>wi;
            if(!arr[wi])
            arr[wi]=i;
            else
            arr[arr[wi]]=i;
        }
    }
    int i;
    for( i=1;i<=k;i++)
    {
        if(arr[i]==0)
        break;
    }
    for(int l=k+1;l<=n;l++)
    {
        if(arr[l]==0)
        arr[l]=i;
    }
    for(int i=1;i<=n;i++)
    cout<<arr[i]<<endl;
	return 0;
}

