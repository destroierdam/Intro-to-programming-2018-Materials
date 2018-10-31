#include<iostream>
using namespace std;
int main()
{
	int n, i, result = 1;
	cin>>n;
	
	// с for
	for(i = 0;i < n;i++)
	{
		result *= 2;
	}
	cout<<result<<endl;
	
	// с while
	i = 0;
	result = 1;
	while(i < n)
	{
		result *= 2;
		i++;
	}
	cout<<result<<endl;
	
	// с do-while
	i = 0;
	result = 1;
	if(n > 0)
	{
		do
		{
			result *= 2;
			i++;
		} while(i < n);
	}
	cout<<result<<endl;
	
	return 0;
}