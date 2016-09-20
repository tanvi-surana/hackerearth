#include <iostream>
#include<stack>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    stack<int> s;
    int count=0;
    int current;
   /* scanf("%d",&current);
    n--;
    if(current!=0)
      s.push(current);*/
    while(n--)
    {
        scanf("%d",&current);
    	if(current==0)
    	{
    		int val=s.top();
    		count-=val;
    		s.pop();
    	}
    	else
    	{
    	   count+=current;
    	   s.push(current);
    	}
    }
    
    cout<<count<<endl;
    return 0;
}