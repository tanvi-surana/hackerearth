include <iostream>
#include<cstring>
using namespace std;
 
 
bool checkIfPalindrome(string str)
{
    bool flag=true;
    int start=0;
    int end=str.length()-1;
    
    while(start <= end)
    {
        if(str[start]==str[end])
        {
            start++;
            end--;
        }
        else
        {
            flag=false;
            break;
        }
    }
    
    return flag;
    
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    string str;
    cin>>str;
    bool val=checkIfPalindrome(str);
    if(val==0)
    {
        cout<<str.length()<<endl;
    }
    else if(val==1)
    {
        char x=str[0];
        bool flag=1;
        for(int i=1;i<str.length();i++)
        {
            
            if(str[i]!=x)
            {
                flag=false;
                break;
        
            }
        }
        
        if(str.length()==1)
        {
            cout<<"0"<<endl;
        }
        else if(flag==true)
        {
            cout<<"0"<<endl;
        }
        else 
        {
            cout<<str.length()-1<<endl;
        }
    }
    return 0;
}