#include<iostream>
using namespace std;
const int MAX_N = 128;

/// size_t is the same as unsigned int

void read(int  matrix[][MAX_N], size_t & sz)
{
	cin >> sz;
	for (unsigned int i = 0; i < sz; i++)
	{
		for (size_t j = 0; j < sz; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
int productPrimary(int matrix[][MAX_N], size_t sz)
{
	int br = 1;
	for (size_t i = 0; i < sz; i++)
	{
		br *= matrix[i][i];
	}
	return br;
}
int productSecondary(int matrix[][MAX_N], size_t sz)
{
	int br = 1;
	for (size_t i = 0; i < sz; i++)
	{
		br *= matrix[i][sz - i - 1];
	}
	return br;
}
bool digitDividesNumber(int n)
{
	int m = n;
	while(m)
	{
		// m%10 will give us every digit in the number n
		
		if (n % (m%10) == 0)
		{
			return true;
		}
		m/=10;
	}
	return false;
}
int main()
{
	int matrix[MAX_N][MAX_N];
	size_t n;
	read(matrix, n);

	int res = productPrimary(matrix, n) * productSecondary(matrix, n);

	// If the diagonals intercept
	if(n % 2 != 0)
	{
		// Remove the number counted twice
		res /= matrix[n/2][n/2];
	}
	
	cout << res << endl;
	cout << (digitDividesNumber(res) ? "YES" : "NO") << endl;
	return 0;
}