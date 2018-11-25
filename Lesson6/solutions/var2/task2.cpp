#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    bool ans = true;

    cin >> n;

    while (n != 0)
    {
        if (n % 10 <= n / 10 % 10)
        {
            ans = false;
        }
        n /= 100;
    }

    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
