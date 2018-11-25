#include <iostream>
using namespace std;
int main()
{
    int people, discount;

    cin >> people;

    if(people % 7 == 0)
    {
        discount = 50;
    }
    else if(people < 5)
    {
        discount = 0;
    }
    else if(people <= 10)
    {
        discount = 5;
    } 
    else if(people <= 40)
    {
        discount = 20;
    }
    else // people > 40
    {
        discount = 33;
    }

    cout << discount << "%" << endl;
    return 0;
}
