#include <iostream>
#include<map>
#include<cstring>
using namespace std;
 
int main()
{
    int freq[256];
    memset(freq,0,sizeof(freq));
    string str;
    char x;
    int max=1;
    getline(cin,str);
    int len=str.length();
    int current=0;
    for(int i=0;i<len;i++)
    {
        freq[str[i]]++;
        if(freq[str[i]]>max)
        {
            max=freq[str[i]];
            current=str[i];
        }
    }
    
    for(int i=0;i<256;i++)
    {
        //if(freq[i]>0)
        //  printf("%c % d %d \n",i,i,freq[i]);
        if(freq[i]==max && current>i)
        {
           //   cout<<"Entering if condition\n";
            current=i;
        //  printf("%c %d\n",current,current);
        }
    }
    
    printf("%c %d\n",current,max);
    
    return 0;
}