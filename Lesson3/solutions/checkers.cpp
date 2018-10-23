#include<iostream>
using namespace std;
int main()
{
    int n;
	cin>>n;
	
	// with if-else
	if(n%4 == 0 || n == 1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	// with ternary operator
	cout<<((n%4 == 0 || n == 1) ? "YES" : "NO")<<endl;
    return 0;
}