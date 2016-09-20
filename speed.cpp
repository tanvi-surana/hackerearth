#include <iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
 
void calculate()
{
	long int n;
	scanf("%ld",&n);
	vector<long int> v(n);
	for(int i=0;i<n;i++)
	  scanf("%ld",&v[i]);
 
    long int count=1;
    int max=v[0];	
	for(int i=1;i<n;i++)
	{
		if(max>v[i])
		{
			count++;
			max=v[i];
		}		
	}
	cout<<count<<endl;
	  
}
 
int main()
{
    
    int t;
    scanf("%d",&t);
    while(t--)
      calculate();
    return 0;
}