#include<iostream>
using namespace std;
int main()
{
    // Да си направим една променлива за числото и четири променливи за четирите цифри
    int n, dig1, dig2, dig3, dig4;
    
    cin>>n;
    
    dig1 = n / 1000;
    dig2 = n / 100 % 10;
    dig3 = n / 10 % 10;
    dig4 = n % 10;
    
    if(dig1 % 2 == 1 && dig1 > dig2  && dig1 > dig3 && dig1 > dig4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
