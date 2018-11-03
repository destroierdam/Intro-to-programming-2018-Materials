#include <iostream>
using namespace std;
int main()
{
    int n, i, k;
	// Голямо число, в което ще пишем резултата
    long long int res = 1;
    cin>>n>>k;
	
	// res = (k+1)*(k+2)*...*n; // еквивалентно е на n!/k!, обаче някои числа са се бастисали
    for(i = k+1;i <= n;i++)
    {
        res *= i;
    }
    cout<<res<<endl;
    return 0;
}