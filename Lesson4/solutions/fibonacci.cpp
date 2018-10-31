#include<iostream>
using namespace std;
int main()
{
	int n, i, first = 0, second = 1, next;
	cin>>n;
	
	// Първо да покрием базовите случаи за n == 0, 1
	if(n == 0 || n == 1)
	{
		// За краткост пиша n, понеже съвпада с отговора
		cout<<n<<endl;
	}
	else
	{
		
		// с for
		for(i = 2; i <= n;i++)
		{
			next = first + second;
			first = second;
			second = next;
		}
		cout<<next<<endl;
		
		
		// с while
		i = 2;
		first = 0;
		second = 1;
		while(i <= n)
		{
			next = first + second;
			first = second;
			second = next;
			i++;
		}
		cout<<next<<endl;
		
		// с do-while
		i = 2;
		first = 0;
		second = 1;
		do
		{
			next = first + second;
			first = second;
			second = next;
			i++;
		} while(i <= n);
		cout<<next<<endl;
		
	}
	return 0;
}