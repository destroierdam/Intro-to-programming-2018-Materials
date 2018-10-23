#include<iostream>
using namespace std;
int main()
{
	int year;
	cin>>year;
	
	bool y4 = year % 4 == 0;
	bool y100 = year % 100 == 0;
	bool y400 = year % 400 == 0;
	
	// with if-else
	if(((y4 && !y100) || y400))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	// with ternary operator
	cout<<(((y4 && !y100) || y400) ? "YES" : "NO")<<endl;
	return 0;
}