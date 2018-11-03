#include<iostream>
using namespace std;
int main()
{
	int n, i;
	cin>>n;
	
	// i == всички числа от 1 до n
	for(i = 1;i <= n;i++)
	{
		// Ако НЕ се дели на 3 без остатък И НЕ се дели на 7 без остатък
		if(i % 3 != 0 && i % 7 != 0) // <==> if(i % 3 && i % 7)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}