#include<iostream>
using namespace std;
bool isInteresting(int n)
{
	while (n)
	{
		int firstDigit = n % 10;
		int secondDigit = n / 10 % 10;

		if (secondDigit > firstDigit)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
int main()
{
    int n, numbers[1024];
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>numbers[i];
    }
    for(int i = 0; i < n; i++)
    {
        cout<<isInteresting(numbers[i])<<endl;
    }
	return 0;
}
