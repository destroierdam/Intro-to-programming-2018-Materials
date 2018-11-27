#include<iostream>
using namespace std;
bool isLeap(int n)
{
	if (n % 4 == 0)
	{
		if (n % 100 != 0)
		{
			return true;
		}
		else return (n % 400 == 0);
	}
	return false;
}
int main()
{
	return 0;
}
