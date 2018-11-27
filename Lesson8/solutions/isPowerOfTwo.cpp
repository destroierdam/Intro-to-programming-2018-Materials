#include<iostream>
using namespace std;
bool isPowerOfTwo(int n)
{
	if (n == 0) return false;
	while (n > 1)
	{
		if(n % 2 == 1)
		{
			return false;
		}
		n /= 2;
	}
	return true;
}
int main()
{
	return 0;
}
