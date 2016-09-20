#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	int z;
    	cin>>z>>n;
    	int* arr=new int[n];
    	for(int i=0;i<n;i++)
    	{
    		int x;
    		cin>>x;
    		z=z&x;
    	}
    	
    	if(z==0)
    	{
    		cout<<"Yes"<<endl;
    	}
    	else
    	{
    		cout<<"No"<<endl;
    	}
    
    }
    return 0;
}