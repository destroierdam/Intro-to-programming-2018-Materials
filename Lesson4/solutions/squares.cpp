#include<iostream>
using namespace std;
int main()
{
	int n, i;
	
	cin>>n;
	
	// с for
	for(i=1;i*i<=n;i++)
	{
		cout<<i*i<<" ";
	}
	cout<<endl;
	
	// с while
	i=1;
	while(i*i<=n)
	{
		cout<<i*i<<" ";
		i++;
	}
	cout<<endl;
	
	
	// с do-while
	i=1;
	do
	{
		cout<<i*i<<" ";
		i++;
	}
	while(i*i<=n);
	cout<<endl;
	
	
	return 0;
}