#include <stdio.h>
int main() {
int t;
scanf("%d",&t);
while(t--)
{
int m;
long long b;
scanf("%d %lld",&m,&b);
		/*if(stol(b)==0)
		cout<<m%10<<endl;
		else
		{ */
if(b==0)
printf("1\n");
else if(m%10==0||m%10==1||m%10==5||m%10==6)
printf("%d\n",m%10);
else
{
int m0=0;
int p= m%10;
if(b%4==0) m0=(p*p*p*p)%10;
if(b%4==3) m0=(p*p*p)%10;
if(b%4==2) m0=(p*p)%10;
if(b%4==1) m0=p;
printf("%d\n",m0);}   
		//}
}
return 0;
}
