#include <iostream>
#include <set>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(0);
    int n;
    cin>>n;
    int* arr=new int[n+1];
    
    for(int i=1;i<=n;i++)
    {
    	cin>>arr[i];
    }
    
    int s,e;
    cin>>s>>e;
    
   set<int> visited;
   int current;
   bool flag=false;
   //reach a particular index
   
   if(s == e)
   		cout<<"Yes"<<endl;
   else
   {
	   while(1)
	   {
	   	   
	   	   if(visited.count(s)!=0)
	   	   	  break;	
	   	   
	   	   current=arr[s];
	   	   visited.insert(s);
	   	   
	   	   if(current == e)
	   	   {
	   	   	flag=true;
	   	   	break;
	   	   }
	   	   
	   	   s=current;
	   	  
	   }
	   
	   
	    if(flag)
   	  cout<<"Yes"<<endl;
  else
     cout<<"No"<<endl;	
   }   
   
    
    
    
    
    delete [] arr;
    return 0;
}