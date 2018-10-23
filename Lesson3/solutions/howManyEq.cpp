#include <iostream>
using namespace std;
int main()
{
	
	int a, b, c;

	cin >> a >> b >> c;

	// Ако и трите са равни
	if (a == b && b == c)
	{
		cout << 3 << endl;
	} // Ако някои две са равни
	else if (a == b || a == c || b == c)
	{
		cout << 2 << endl;
	}
	else // Ако са различни
	{
		cout << 0 << endl;
	}
	return 0;
}