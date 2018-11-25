#include <iostream>
using namespace std;
int main()
{
    int price, speed, usb;
    bool isAc;

    cin >> price >> speed >> usb >> isAc;

    bool expensive = price >= 80 && price <= 130 && speed >= 200 && usb >= 2 && isAc;

    bool cheap = price <= 70 && (speed < 200 || !isAc);
    
    bool ans = expensive || cheap;

    cout << (ans ? "YES" : "NO") << endl;
    return 0;
}
