#include<iostream>
using namespace std;
int main()
{
    int n, k, result = 1;
    cin>>n>>k;

    for(int i = n-k+1; i <= n; i++)
    {
        result *= i;
    }

    cout<<result<<endl;
	return 0;
}
