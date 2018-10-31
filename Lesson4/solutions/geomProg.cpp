#include<iostream>
using namespace std;
int main()
{	
	int n, i;
	double a, result=0, chlen=1;
	
	cin>>a>>n;
	
	// с for
	for(i=0;i<=n;i++)
	{
		result += chlen;
		chlen *= a;
	}
	cout<<result<<endl;
	
	// с while
	i = 0;
	result = 0;
	chlen = 1;
	while(i <= n)
	{
		result += chlen;
		chlen *= a;
		i++;
	}
	cout<<result<<endl;
	
	// с do-while
	i = 0;
	result = 0;
	chlen = 1;
	do
	{
		result += chlen;
		chlen *= a;
		i++;
	} while(i <= n);
	cout<<result<<endl;
	
    return 0;
}