#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
	cin>>n;
	
	// Ако n > 0
	if(n>0)
	{
		cout<<1<<endl;
	}
	else if(n == 0) // Ако не е, то проверяваме дали е 0
	{
		cout<<0<<endl;
	}
	else // Ако не е и 0, то значи е отрицателно
	{
		cout<<-1<<endl;
	}
    return 0;
}