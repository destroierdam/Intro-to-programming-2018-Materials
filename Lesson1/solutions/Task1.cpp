/* Task 1: Точка и окръжност
По подадени координати (x, y) на точка, проверете дали тя лежи в окръжност с радиус 6 и начална точка (0,0). 
Нека x и y са цели числа.

Вход: 2 1

Изход: Yes

Вход: 10 12

Изход: No
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// Ще вземем две цели числа x и y
	int x, y;

	// Прочитаме ги от конзолата
	cin >> x >> y;

	// Дробно число за разстоянието на точката от центъра
	double distanceFromCenter;

	// Смятаме разстоянието от центъра до точката
	distanceFromCenter = sqrt(x*x + y*y);

	// Ако distanceFromCenter е по-малък или равен на 6
	// AKA Ако точката е в кръга или на ръба
	if (distanceFromCenter <= 6)
	{
		// Изкарай, че точката е в кръга
		cout << "The point is in the circle" << endl;
	}
	//В противен случай
	else
	{
		// Изкарай, че точката не е в кръга
		cout << "The point is not in the circle" << endl;
	}
	
    return 0;
}