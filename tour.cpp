#include <bits/stdc++.h>
using namespace std;
 
//set<string> s;
map<string,int> my_map;
int main()
{
	
    int n,p,n1;
    scanf("%d",&n);
    n1=n;
    string name,start;
    long int arr[n][n];
    int count=0;
    cin>>name;
    start=name;
    my_map[name]=count++;
   
    n1--;
    while(n1--)
    {
    	cin>>name;
    	my_map[name]=count++;
    }
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{  
    		scanf("%ld",&arr[i][j]);
    	 
    	}
    	
    }
   
    
    scanf("%d",&p);
    
    long long total_cost=0;
    
    cin>>name;
    if(name!=start)
    {
    	total_cost+=arr[my_map[start]][my_map[name]];
    	//cout<<total_cost<<endl;
    }
    
    p--;
    string prev=name;
    
    while(p>=1) 
    {
    	cin>>name;
    	total_cost+=arr[my_map[prev]][my_map[name]];
    	//cout<<total_cost<<endl;
       	prev=name;
    	p--;
    }
    
    printf("%lld",total_cost);
    
    return 0;
}