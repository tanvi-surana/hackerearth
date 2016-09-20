#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
 
bool checkIfPrime(int p)
{
	if(p == 1)
	  return false;
	for(int i=2;i<p;i++)
	{
		if(p%i==0)
		  return false;
	}
	
	return true;
}
 
long calculate()
{
	int n;
	cin>>n;
	int* arr=new int[n];
	vector<int> v;
	set<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(s.count(arr[i])==0)
		{
			s.insert(arr[i]);
			if(checkIfPrime(arr[i]))
			{
			//	cout<<arr[i]<<" ";
				v.push_back(arr[i]);
			}
		}
	}
	
	
	if(v.size()==0)
		return -1;
	
	sort(v.begin(),v.end());
	int val=v[v.size()-1];
	return val*val;
	
	
	
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
    	cout<<calculate()<<endl;
    }
    return 0;
}