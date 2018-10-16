#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, x, y;
	
	cin>>n>>m>>x>>y;
	
	// ПИТАЙТЕ ЗА РАЗЯСНЕНИЯ
	if((n-m) == (x-y) || (n+m) == (x+y))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
    return 0;
}