#include<iostream>
using namespace std;
int main()
{
	int n, i, j, k;
	
	// голямо цяло число, в което ще записваме числото за принтиране
	long long int res = 1;
	
	cin>>n;
	
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=i;k++)
		{
			res = 1;
			
			// ще умножим всички числа (n-k+1)*(n-k+2)*...*n
			// тук i ще мине през всички числа от 1 до n
			
			
			// res = i!/(i-k)! с бастисване
			for (int j=i-k+1;j<=i;j++)
			{
				res *= j;
			}
			
			// res /= k!
			for (int j=2;j<=k;j++)
			{
				res /= j;
			}
				
			
			cout<<res<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}