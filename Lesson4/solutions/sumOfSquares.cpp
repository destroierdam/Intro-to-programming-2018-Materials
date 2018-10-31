#include<iostream>
using namespace std;
int main()
{
	int n, i, result = 0;
	cin>>n;
	
	// с for
	for(i = 1;i <= n; i++)
	{
		result += i*i;
	}
	cout<<result<<endl;
	
	// с while
	i = 1;
	result = 0;
	while(i <= n)
	{
		result += i*i;
		i++;
	}
	cout<<result<<endl;
	
	// с do-while
	i = 1;
	result = 0;
	if(n > 0)
	{
		do
		{
			result += i*i;
			i++;
		} while(i <= n);
	}
	else
	{
		result = 0;
	}
	cout<<result<<endl;
	
	return 0;
}