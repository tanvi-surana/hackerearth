#include <iostream>
using namespace std;
 
int main()
{
    int val,m;
    cin>>val>>m;
    //n++;
    long long result=1;
    while(val>0)
    {
        result*=val;
        result=result%m;
        val--;
    }
    cout<<result<<endl;
    return 0;
}
