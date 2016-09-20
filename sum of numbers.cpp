#include <iostream>
using namespace std;
 
bool subset_sum(long long int* arr,int n,long long int sum)
{
	if(sum==0)
		return true;
		
	if(n==0 && sum!=0)
	{
		return false;
	}
	
	// if(arr[n-1]>sum)
	// {
	// 	return subset_sum(arr,n-1,sum);
	// }
	
	return subset_sum(arr,n-1,sum) || subset_sum(arr,n-1,sum-arr[n-1]);
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long *arr=new long long[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long sum;
		cin>>sum;
		if(subset_sum(arr,n,sum))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		delete [] arr;
	}
    return 0;
}