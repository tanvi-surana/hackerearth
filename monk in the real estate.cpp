#include <iostream>
#include <set>
using namespace std;
 
void calculate()
{
	int e;
	cin>>e;
	int a,b;
	set<int> s;
	while(e--)
	{
	//	cout<<"Enter"<<endl;
		cin>>a>>b;
		s.insert(a);
		s.insert(b);
	}
	
	cout<<s.size()<<endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
    	calculate();
    }
    return 0;
}