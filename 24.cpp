#include<bits/stdc++.h>
using namespace std;
string arr[101];
string add(string a,string b,string c)
{
int lena=a.length();
int lenb=b.length();
int lenc=c.length();
int maxlen= max(max(lena,lenb),lenc);
while(a.length()!=maxlen)
a='0'+a;	
while(b.length()!=maxlen)
b='0'+b;
while(c.length()!=maxlen)
c='0'+c;
string ans="";
int carry=0;
for(int i=a.length()-1;i>-1;i--)
{
int m=0;
if(carry==0)
m=(a[i]-'0')+(b[i]-'0')+(c[i]-'0');
else
m=(a[i]-'0')+(b[i]-'0')+(c[i]-'0')+carry;

if(m>9&&i!=0)
		{
			ans=to_string(m%10) + ans;
			carry=m/10;
		}
		if(i==0||m<=9)
		{
			ans=to_string(m)+ans;
			carry=0;
		}	
}
return ans;
}
string multiply(string a,int b)
{
	if(a.size()==1&&b/10==0)
	return to_string(stoi(a)*b);
	
	int len=a.length();
	string res[]={"","0","00"};
	int temp=b;
	int carry=0;
	int o=0;
	while(temp>0)
	{
		int r=temp%10;
		for(int i=len-1;i>-1;i--)
		{   
		   int m;
		  
			if(carry==0)
		    m= r* (a[i]-'0');
		    else
		    m= r* (a[i]-'0')+ carry;
		if(m>9&&i!=0)
		{
			res[o]=to_string(m%10) + res[o];
			carry=m/10;
		}
		if(i==0||m<=9)
		{
			res[o]=to_string(m)+res[o];
			carry=0;
		}
		
		}
		o++;
	temp/=10;	
	}
	
	
	return add(res[0],res[1],res[2]);
}
void init()
{
	arr[0]=to_string(1);
	arr[1]=to_string(1);
	arr[2]=to_string(2);
	for(int i=3;i<101;i++)
	{
		arr[i]=multiply(arr[i-1],i);
	}
		
}
int main()
{  int t;
cin>>t;
init();
while(t--)
{
	int n;
	cin>>n;
	cout<<arr[n]<<endl;
}
} 
