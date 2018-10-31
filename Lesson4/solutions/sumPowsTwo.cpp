#include<iostream>
using namespace std;
int main()
{
	int n, i, powers = 1, result = 0;
	cin>>n;
	
	// с for
	for(i = 0;i <= n;i++)
	{
		result += powers;
		powers *= 2;
	}
	cout<<result<<endl;
	
	// с while
	i = 0;
	powers = 1;
	result = 0;
	while(i <= n)
	{
		result += powers;
		powers *= 2;
		i++;
	}
	cout<<result<<endl;
	
	// с do-while
	i = 0;
	powers = 1;
	result = 0;
	do
	{
		result += powers;
		powers *= 2;
		i++;
	} while(i <= n);
	cout<<result<<endl;
	
	return 0;
}