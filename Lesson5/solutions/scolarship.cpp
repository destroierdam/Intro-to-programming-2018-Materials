#include<iostream>
using namespace std;
int main()
{
    int n;
    double temp, avg = 0; // Ще използваме temp, за да четем
    bool hasPoorMark = false;
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cin>>temp;
        if(temp == 2)
        {
            hasPoorMark = true;
            break;
        }
        avg += temp;
    }

    // Да сметнем средния му успех
    avg /= n;

    // Ако има ср. успех минимум 4.5 И няма двойка
    if(avg >= 4.5 && hasPoorMark == false)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
	return 0;
}
