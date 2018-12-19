#include <iostream>
using namespace std;
int main()
{
    int n, numbers = 0;

	do
    {
		cin >> n;
        numbers++;
    }
	while (n >= 0);
    
    
    cout << numbers - 1 << endl;

    return 0;
}
