#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
  
/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(int x, unsigned int y) 
{ 
    int res = 1;      // Initialize result 
  
    x = x % m;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % m; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % m;   
    } 
    return res; 
} 
int main()
{ long  long n=3751;
	long long p=((((power(3,n+1)-1)%m)/2 )+(n*(n+1))%m +(5*(n+1))%m +m)%m;
cout<<p;
}

