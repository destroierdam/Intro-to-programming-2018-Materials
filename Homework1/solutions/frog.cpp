#include<iostream>
using namespace std;
int main()
{
	int k, t;
	cin>>k>>t;
	
	if((t/k) % 2 == 0)
	{
		cout<<t%k<<endl;
	}
	else
	{
		cout<<k-(t%k)<<endl;
	}
	return 0;
}