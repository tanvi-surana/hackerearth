#include<bits/stdc++.h>
using namespace std;
 
#define l long
 
int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)
    {
    	l n;
    	scanf("%ld",&n);
    	string num=to_string(n);
    	string fixed="21";
    	if(num.find(fixed)!=-1)
    	{
    	  	printf("The streak is broken!\n");
    	  	 
    	}
    	else if(n%21==0)
    	{
    		printf("The streak is broken!\n");
    	 
    	}
    	else
    	{
    		printf("The streak lives still in our heart!\n");
    	}
    	
    	
    }
    return 0;
}