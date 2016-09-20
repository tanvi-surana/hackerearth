#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int count=0;
        set<int> s;
        while(n--)
        {
            int x;
            cin>>x;
            if(s.count(x%10)!=0)
            {
                count++;
            }
            s.insert(x%10);
        }
        
        cout<<count<<endl;
    }
    return 0;
}