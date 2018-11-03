#include <iostream>
using namespace std;
int main()
{
    int n, i, oddProduct = 1, evenProduct = 1;
	cin>>n;
	
	// Временна променлива, която ще използвам да чета
	int temp;
	
	// Започваме от първото число до n-тото число
	for(i = 1;i <= n;i++)
	{
		cin>>temp;
		if(i % 2 == 0) // Ако i е четно
		{
			evenProduct *= temp;
		}
		else // А ако е нечетно
		{
			oddProduct *= temp;
		}
	}
	
	if(oddProduct == evenProduct)
	{
		cout<<"yes "<<evenProduct<<endl;
	}
	else
	{
		cout<<"no "<<oddProduct<<" "<<evenProduct<<endl;
	}
    return 0;
}