#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    vector<int> v(n);
    queue<int> q;
    
    for(int i=0;i<n;i++)
    {  
    	int current;
    	scanf("%d",&current);
    	q.push(current);
    }
    
     for(int i=0;i<n;i++)
    {  
    	scanf("%d",&v[i]);
    }
    
    int current=0,exec=0;
    
    while(!q.empty())
    {
    	int val=q.front();
    	if(val==v[exec])
    	{
    		q.pop();
    		exec++;
    		current++;
    	}
    	else
    	{
    		q.pop();
    		q.push(val);
    		current++;
    	}
    }
    
    printf("%d\n",current);
    return 0;
}