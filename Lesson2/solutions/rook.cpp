#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	// В rx и ry ще пишем реда и колоната на топа,
	// а в a и b ще пишем реда и колоната на полето, което ни интересува
    int rx,ry,a,b;
    cin>>rx>>ry>>a>>b;
	
	// Ако сме на същия ред или същата колона
    if(rx==a||ry==b)
	{
		cout<<"YES"<<endl;
	}
    else
	{
        cout<<"NO"<<endl;
	}
    return 0;
}
