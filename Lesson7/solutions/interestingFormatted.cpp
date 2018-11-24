#include <iostream>
using namespace std;
int main()
{
    // По условие числата са най-много 1000.
    const int MAX_N = 1000;
    
    // Нека да си направим един масич, където ще сържим числата, и една променлива n, която ще показва реалния брой числа.
    int arr[MAX_N], n;
    
    //Да прочетем броя числа
    cin>>n;
    
    // Да запазим числата в arr
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    // Да обиколим всички числа от масива и за всчко едно от тях да проверим дали то е интересно
    for(int i = 0; i < n; i++)
    {
        // За да не изгубваме числото ще си запазим негово копие в една временна променлива и ще унищожим нея при проверката
        int number = arr[i];
        
        bool isInteresting = true;
        while(number != 0)
        {
            // Ако най-дясната цифра е по-малка от следващата
            if(number % 10 < number / 10 % 10)
            {
                // ,то числото не е интересно. 
                isInteresting = false;
            }
            number /= 10;
        }
        // Вече сме проверили дали числото е интересно и отговорът се пази в isInteresting
        
        if(isInteresting)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
/*

Transponirane na matrica <= 100 x 100

*/
