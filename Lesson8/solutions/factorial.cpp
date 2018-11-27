#include<iostream>
using namespace std;
int factorial(int n)
{
	int res = 1;
	for (int i = n; i > 0; i--)
	{
		res *= i;
	}
	return res;
}
int main()
{
	return 0;
}
