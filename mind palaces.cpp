#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    map<int,pair<int,int>> my_map;
    for(int i=0;i<n;i++)
    {
    	int val;
    	for(int j=0;j<m;j++)
    	{
    		scanf("%d",&val);
    		my_map[val]=make_pair(i,j);
    		
    	}
    }
    
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int x;
    	scanf("%d",&x);
    	 
    	if(my_map.find(x)!=my_map.end())
    	{
    		 cout<<my_map[x].first<<" "<<my_map[x].second<<endl;
    	}
    	
    	else
    	{
    		printf("-1 -1\n");
    	}
    	 
    }
    
    return 0;
}