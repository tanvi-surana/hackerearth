#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
 
void calculate()
{
	string str;
	cin>>str;
	int len=str.size();
	int dp[len][len];
	memset(dp,0,sizeof(dp));
	long int result=0;
	result+=len;
	for(int i=0;i<len;i++)
	{
		dp[i][i]=1;
	}
	
	for(int i=1;i<len;i++)
	{
		if(str[i-1]==str[i])
		{
			dp[i-1][i]=2;
			result+=4;
		}	
			
	}
	
	
	for(int len1=3;len1<=len;len1++)
	{
		for(int i=0;i<len-len1+1;i++)
		{
			int j=i+len1-1;
			
			if(str[i]==str[j] && dp[i+1][j-1])
			{
				dp[i][j]=len1;
				result+=len1*len1;
			}
		}
	}
	
	cout<<result<<endl;
}
 
 
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	calculate();
    }
    return 0;
}