#include <iostream>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int* arr=new int[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	
     	if(n==1)
     	{
     		cout<<arr[0]<<endl;
     	}
     	else
     	{
     		cout<<"0"<<endl;
     	}
    	 
    	
    	delete [] arr;
    }
    return 0;
}