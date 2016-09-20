#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
 
int main()
{
    int t;
    scanf("%d",&t);
        getchar();
 
    while(t--)
    {
        string s;
        getline(cin,s);
        //int len=s.length();
        reverse(s.begin(),s.end());
        string ::iterator it,it1;
        
        for(it=s.begin();it!=s.end();it++)
        {
            it1=it;
            
            while(it!=s.end() && *it!=' ')
                  it++;
               
            reverse(it1,it);
            
            if(*it=='\n' || it==s.end())
               break;
            
        }
        
        cout<<s<<endl;
        
    }
    return 0;
}