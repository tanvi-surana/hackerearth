#include <iostream>
#include<cstring>
#include<map>
using namespace std;
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	map<char,int> mymap;
    	string s;
    	cin>>s;
    	int len=s.length();
    	int flag=0;
    	for(int i=0;i<len;i++)
    	{
    		mymap[s[i]]++;
    		if(mymap[s[i]]==2)
    		{
    			printf("Yes\n");
    			flag=1;
    			break;
    		}
    	}
    	
    	if(flag==0)
    	{
    		printf("No\n");
    	}
    	
    }
    return 0;
}