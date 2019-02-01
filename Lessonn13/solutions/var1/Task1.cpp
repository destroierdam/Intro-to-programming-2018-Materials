#include<iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
	if(n == 0) return false;
	if(n == 1) return true;
	return (n % 2 == 0) && isPowerOfTwo(n/2);
}
int main()
{
	const int MAX_SIZE = 256;
	int a[MAX_SIZE][MAX_SIZE];
	int n,sum=0;
	
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>>a[i][j];
		}
	}
	
	// primary diagonal
	for(int i = 0; i < n; i++)
	{
		sum += a[i][i];
	}
	
	// secondary diagonal
	for(int i = 0; i < n; i++)
	{
		if(n % 2 == 0)
		{
			sum += a[n-i-1][i];
		}
		else if(i != n/2) // n % 2 != 0 
		{
			sum += a[n-i-1][i];
		}
	}
	
	cout<<endl<<sum<<endl;
	cout<<(isPowerOfTwo(sum) ? "YES" : "NO")<<endl;
	
	// Petya's solution in class
	cout << endl;
	sum = 0;
	// Primary diagonal
	for(int i = 0; i < n; i++)
	{
		sum += a[i][i];
	}
	
	// Secondary diagonal
	for(int i = 0; i < n; i++)
	{
		sum += a[n-i-1][i];
	}
	
	// If the matrix is of odd size then diagonals intercept
	if(n % 2 != 0)
	{
		// Remove the twice counted middle number
		sum -= a[n/2][n/2];
	}
	
	cout<<sum<<endl;
	cout<<(isPowerOfTwo(sum) ? "YES" : "NO")<<endl;
	
	return 0;
}