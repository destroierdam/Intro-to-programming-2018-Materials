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

	// Смятаме разстоянието от точката до центъра
	distanceFromCenter = sqrt(x*x + y*y);

	// Ако distanceFromCenter е по-малък или равен на 6
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
