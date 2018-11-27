#include<iostream>
using namespace std;
int main()
{
    int n, brEvenDig = 0;
    cin>>n;

    // Ще минем през всички цифри на числото и ще проверим за всяка една дали тя е четна
    while(n)
    {
        // Да си направим една променлива, която ще е равна на най-дясната цифра на числото
        int curDig = n % 10;

        if(curDig % 2 == 0)
        {
            brEvenDig++;
        }

        // Минаваме на следващата цифра
        n/=10;
    }
    cout<<brEvenDig<<endl;
	return 0;
}
