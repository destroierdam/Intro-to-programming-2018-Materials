#include<iostream>
using namespace std;
int main()
{
    // В sum ще държим сумата, а n ще ползваме за четене на числата
	int sum = 0, n;
	
	do
	{
	    cin>>n;
	    sum += n;
	} while (n);
	
	cout<<sum<<endl;
	return 0;
}
