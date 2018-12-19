#include<iostream>
using namespace std;
bool isInteresting(int n)
{
	int minDigit = n%10;
	
	while(n)
	{
		// Za da bude edno chislo interesno, cheteno otdqsno na lqvo, cifrite mu trqbva da sa vuv neuvelichavasht se red
		// Ako niakade namerim cifra, koqto e po-golqma ot dosegashnata minimalna, znachi chisloto ne e interesno
		if(n%10 > minDigit)
		{
			return false;
		}
		else
		{
			// minDigit stava po-malka ili si ostava sushtata
			minDigit = n % 10;
		}
		
		// Minavame na sledvashtata cifra
		n /= 10;
	}
	return true;
}
int main()
{
	int n, number;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> number;
		
		if(isInteresting(number))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
		cout<<endl;
	}
	return 0;
}
