#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, m, k;
	
	cin>>n>>m>>k;
	
	// Ако първото е по-голямо или равно на второто И е по-голямо или равно на третото
	if(n>=m && n>=k)
	{
		cout<<n<<endl;
	}
	else if(m>=n && m>=k) // Ако второто е по-голямо или равно на първото И е по-голямо или равно на третото
	{
		cout<<m<<endl;
	}
	else // Ако не, значи най-голямото е третото
	{
		cout<<k<<endl;
	}
	
    return 0;
}