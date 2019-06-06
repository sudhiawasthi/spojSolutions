#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t;
	cin>>t;
	string blank,eq;
	getline(cin,blank);// this reads the rest of the line t was on// the stream doesnot read after empty spaces
	while(t--)
	{ 
	getline(cin,blank);//reading empty line
	getline(cin,eq);  //getline can read empty spaces ,cin cant
    int posm,pose,posp;
    string blot;
    for(int i=0;i<eq.length();i++)
    {
    	if(eq[i]=='=')
    	pose=i;
    	if(eq[i]=='m')
    	posm=i;
    	if(eq[i]=='+')
    	posp=i;
	}
	//cout<<posm<<" "<<pose<<" "<<posp<<" "<<endl;
	if(pose<posm)
	{
	int a=	stoi(eq.substr(0,posp));
	int b=  stoi(eq.substr(posp+1,pose-posp-1));
    blot=to_string(a+b);
    cout<<eq.substr(0,pose+2)+blot<<endl;
	}
	else
	{
		if(posp<posm)
		{
		int a=	stoi(eq.substr(pose+1,eq.length()-pose-1));
    	int b=  stoi(eq.substr(0,posm));
		blot=to_string(a-b);
		//cout<<eq.substr(pose-1,eq.length()-pose-1)<<endl;	
		cout<<eq.substr(0,posp+2)+blot+eq.substr(pose-1,eq.length()-pose+1)<<endl;
		}
		else if(posm<posp)
		{
			int a=	stoi(eq.substr(pose+1,eq.length()-pose-1));
			int b=  stoi(eq.substr(posp+1,pose-posp-1));
		    blot=to_string(a-b);
			cout<<blot+eq.substr(posp-1,eq.length()-posp+1)<<endl;		
		}
	}
	
	
	}

		
		
	}
