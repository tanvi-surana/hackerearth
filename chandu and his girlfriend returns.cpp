#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
bool comparison(long long int a,long long int b)
{
	return a>=b;
}
 
int main()
{
	ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
	    vector<long long int> v;
	    long int n,m;
	    cin>>n>>m;
	    long long int x;
	    for(long int i=0;i<n+m;i++)
	    {
	    	cin>>x;
	    	v.push_back(x);
	    }
	    
	    sort(v.begin(),v.end(),comparison);
	    
	    for(long int i=0;i<v.size();i++)
	    {
	    	cout<<v[i]<<" ";
	    }
	    
	    cout<<endl;
	    v.clear();
    
    }
    return 0;
}