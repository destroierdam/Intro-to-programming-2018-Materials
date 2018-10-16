#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
	
	// Ако сме на същия ред или същата колона
    if(a==c||b==d)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
