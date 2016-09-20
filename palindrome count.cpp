#include <iostream>
using namespace std;
 
int palindromicSubstrings(string str)
{
	int maxLen=str.length();
	// int** dp=new int*[maxLen];
	// for(int i=0;i<maxLen;i++)
	// {
	// 	dp[i]=new int[maxLen];
	// 	for(int j=0;j<maxLen;j++)
	// 	{
	// 		dp[i][j]=-1;
	// 	}	
 
	// }	
 
	int dp[maxLen][maxLen];
	for(int i=0;i<maxLen;i++)
	{
		for(int j=0;j<maxLen;j++)
		{
			if(i==j)
			{
				dp[i][j]=1;
			}
			else 
			{		
				dp[i][j]=2;
			}	
		}	
	}	
 
	int count=maxLen;
 
 
	// for (int i = 0; i < maxLen; ++i)
	// {
	// 	for (int j = 0; j <maxLen; ++j)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
 
 
	for (int i = 0; i <=maxLen;i++)
	{
		for (int j = i+1; j <maxLen; j++)
		{
			int index=j-i-1;
			//cout<<index<<" "<<j<<endl;
			if(index==j)
			{
				dp[index][j]=1;
			}	
 
			else if(index==j-1 && str[index]==str[j])
			{
				//cout<<"Entering index==j-1"<<endl;
				dp[index][j]=1;
				count++;
			}	
			else if(str[index]==str[j] && dp[index+1][j-1]==1)
			{
				//cout<<"Entering prev diagonal"<<endl;
				dp[index][j]=1;
				count++;
			}
			else 
			{
				dp[index][j]=0;
			}
			//index++;	
		}
	}
 
 
	// for (int i = 0; i < maxLen; ++i)
	// {
	// 	for (int j = 0; j < maxLen; ++j)
	// 	{
	// 		cout<<dp[i][j]<<" ";
	// 	}
	// 	cout<<endl;
	// }
 
 
	// for(int i = 0; i < maxLen; i++)
	// {
	// 	delete [] dp[i];
	// }	
 
	// delete[] dp;
 
	return count;
 
}
 
 
int main()
{
	//string str="abbbcbbba";
	//string str="dskjkd";
	string str;
	cin>>str;
	cout<<palindromicSubstrings(str);
	return 0;
}