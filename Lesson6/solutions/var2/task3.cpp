#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cin >> a >> b;
    
    if(b - a > 10)
    {
        for (int i = b; i >= a; i--)
        {
            bool isPrime = true;
            
            for(int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
            
            if(isPrime && i % 10 == 7)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}
