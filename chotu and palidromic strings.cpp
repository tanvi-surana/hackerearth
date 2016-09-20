#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
#define MAX 10001
 
void checkIfPalindrome(string s)
{
	int len=s.size();
	int flag=0;
	if(len%2==0)
	{
		int current=len-1;
		for(int i=0;i<len/2;i++)
		{
			if(s[i]!=s[current--])
			{
				flag=1;
				break;
			}
		}
		
	}
	else
	{
		int current=len-1;
		for(int i=0;i<len/2-1;i++)
		{
			if(s[i]!=s[current--])
			{
				flag=1;
				break;
			}
		}
	}
	
	if(flag==1)
	  printf("NO\n");
	else
	  printf("YES\n");
	
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	string s1,s2;
    	cin>>s1>>s2;
    	string s3=s1+s2;
    	checkIfPalindrome(s3);
    	//cout<<s3;
    	
    	// char str1[MAX],str2[MAX];
    	// int len1,len2;
    	// scanf("%s",str1);
    	// scanf("%s",str2);
    	// len1=strlen(str1);
    	// len2=strlen(str2);
    	
    	// char str_new[len1+len2+1];
    	// strcpy(str_new,)
    	
    	
    }
    return 0;
}