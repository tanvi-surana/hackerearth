#include <iostream>
#include<stack>
#include<cstdio>
using namespace std;
 
int main()
{
    long int t;
    cin>>t;
    stack<long int> s;
    while(t--)
    {
    	int q;
    	long int val;
    	scanf("%d",&q);
    	if(q==1)
    	{
    		if(!s.empty())
    		{
    			long int val1=s.top();
    			printf("%ld\n",val1);
    			s.pop();
    		}
    		else
    		{
    			printf("No Food\n");
    		}
    	}
    	else if(q==2)
    	{
    	   scanf("%ld",&val);
    	   s.push(val);
    	}
    }
    return 0;
}