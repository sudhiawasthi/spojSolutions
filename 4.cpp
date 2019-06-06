#include<bits/stdc++.h>
using namespace std;
 struct stack
{ // this a structure containing an array and top stores index of the top most element
	char item[500];
	int top;
};
void push(struct stack *p,char x) // p is pointer variable to the stack
{
	if((p->top)>=500)
	cout<<"Overflow"<<endl;
	else
	{
(p->top)++; // increase value of top
(p->item[p->top])=x; // place the valuse of the element to be inserted 
                     // in the new position of top
}
}
void pop(struct stack *p)
{
	if(p->top<=0)
	cout<<"EMpty Stack!"<<endl;
	else
	{
	(p->top)--;	
	}
}
int main()
{  
	int test;
	cin>>test;
	while(test--)
	{
	string input;
	cin>>input;
	string rpn;
	struct stack s;
	for(int i=0;i<input.length();i++)
	{
	if(input[i]>=97&&input[i]>=122)
	{
	rpn+=input[i];	
	}
	else
	{
		
	}
		
	}	
	}
	
	}
}
