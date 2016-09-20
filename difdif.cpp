#include <iostream>
#include <set>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int count1=0;
    string str;
    cin>>str;
    set<string> s;
    for(int i=1;i<=str.length();i++)
    {
        for(int j=0;j<=str.length()-i;j++)
        {
            //startindex,len
            string str1=str.substr(j,i);
            if(s.count(str1)==0)
            {
                s.insert(str1);
                count1++;
            }
        }
    }
    
    cout<<count1<<endl;
    
    return 0;
}