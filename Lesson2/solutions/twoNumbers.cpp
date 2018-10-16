#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m;
	
	cin>>n>>m;
	
	// Ако първото е по-голямо от второто
	if(n>m)
	{
		cout<<1<<endl;
	}
	else if(n < m) // Ако не е, то проверяваме дали първото е по-малко от второто
	{
		cout<<2<<endl;
	}
	else // Ако не е, значи са равни
	{
		cout<<0<<endl;
	}
    return 0;
}