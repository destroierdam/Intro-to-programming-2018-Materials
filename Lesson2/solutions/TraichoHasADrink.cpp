#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    bool studenaBira, studenaRakiq, led;
	
	cin>>studenaBira>>studenaRakiq>>led;
	
	if(studenaBira || (studenaRakiq && led))
	{
		cout<<"Drinks home"<<endl;
	}
	else
	{
		cout<<"Buys cold beer"<<endl;
	}
	
    return 0;
}