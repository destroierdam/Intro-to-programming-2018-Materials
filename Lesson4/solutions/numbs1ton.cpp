#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin>>n;
	
	// с for
	for(i = 1;i <= n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	// с while
	i = 1;
	while(i<=n)
	{
		cout<<i<<" ";
		i++;
	}
	cout<<endl;
	
	// с do-while
	i = 1;
	if(i <= n) // проверка за коректност(ако се въведе отрицателно число)
	{
		do
		{
			cout<<i<<" ";
			i++;
		}while(i <= n);
		cout<<endl;
	}
	return 0;
}