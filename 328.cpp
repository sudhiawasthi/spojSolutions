#include<bits/stdc++.h>
using namespace std;
int main()
{
string n,n1;
getline(cin,n); // cin doesnot work because it will ignore empty spaces ,end will not be determined
while(n!="")
{
	if(n=="1")
	cout<<"1"<<endl;
else
{
int size = n.length();
if((int)n[size-1]!=48) // checking if the last letter is 0
{   //Strings are immutable
// We cant change them
// we made a new string  
	n1=n.substr(0,n.length()-1)+to_string((n[size-1]-'0')-1);
	//a substring till the point where there is no change 
	// then converting the last digit to int by substrating from '0'
	//then then reducing 1 from it
}
else
{   
	int zero=0;
	int i=size-1;
	while((int)n[i]==48)
	{
		zero++; // counting number of zeroes to chsnge them into 1
		i--;
	}	
n1=n.substr(0,n.length()-(zero+1))+to_string((n[size-zero-1]-'0')-1);
for(i=0;i<zero;i++)
n1=n1+"9"; // adding 9 in place of zeroes
}

int res[n1.length()]; // to store result
int carry=0;
for(int i=n1.length()-1;i>-1;i--)
{
	int num=(n1[i]-'0') *2 + carry; // multiplying the ith digit to 2
	res[i]=num%10; // to get units digit
	carry=num/10; // to get tens digit
	
}
if(carry==1)
{
	cout<<carry; // printing extra carry only when needed
	              // this will also avoid printing of unneccassary zeroes
	for(int i=0;i<n1.length();i++)
	cout<<res[i];
}
else
for(int i=0;i<n1.length();i++)
cout<<res[i];

cout<<endl;
}
getline(cin,n);
}


}
