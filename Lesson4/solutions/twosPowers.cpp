#include <iostream>
using namespace std;
int main()
{
    int n, result = 1;
	cin>>n;
	
	// с do-while
	if(n > 0)
	{
		do
		{
			cout<<result<<" ";
			result *= 2;
		} while(result <= n);
	}
	cout<<endl;
	
	// с while
	result = 1;
	
	while(result <= n)
	{
		cout<<result<<" ";
		result *= 2;
	}
	cout<<endl;
	
	// с for
	result = 1;
	
	for(int i = 1;i <= n;i *= 2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	
    return 0;
}