#include<iostream>
using namespace std;
int main()
{
    int hours,minutes,n;
    cin>>n;
	
	hours = (n/60)%24;
	minutes = n%60;
	
    cout<<hours<<" "<<minutes<<endl;
	return 0;
}
