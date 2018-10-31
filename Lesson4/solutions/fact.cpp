#include<iostream>
using namespace std;
int main()
{
	int n, i, result = 1;
	cin>>n;
	
	// с for
	for(i = 1;i <= n;i++)
	{
		result *= i;
	}
	cout<<result<<endl;
	
	// с while
	i = 1;
	result = 1;
	while(i <= n)
	{
		result *= i;
		i++;
	}
	cout<<result<<endl;
	
	// с do-while
	i = 1;
	result = 1;
	do
	{
		result *= i;
		i++;
	}while(i <= n);
	cout<<result<<endl;
	
	
	return 0;
}