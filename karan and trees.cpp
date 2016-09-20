#include <iostream>
#include<cstdio>
using namespace std;
 
 int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long long int a,b;
    	scanf("%lld %lld",&a,&b);
    	//long long max_val=max(a,b);
    	while(1)
    	{
    		if(a==b)
    		{
    			printf("%lld\n",a);
    			break;
    		} 
    		
    		if(a>b)
    		{
    			a=a>>1;
    			//cout<<"a "<<a<<endl;
    			continue;
    		}
    		
    		if(a<b)
    		{
    			b=b>>1;
    			//cout<<"b "<<b<<endl;
    			continue;
    		}
    	}
    		
    	
    	
    }
    
    return 0;
}