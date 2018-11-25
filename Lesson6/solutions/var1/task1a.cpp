#include<iostream>
using namespace std;
int main()
{
	int cena, usb, ram;
	bool ssd;

	cin>>cena>>usb>>ram>>ssd;

	bool expensive = (1000 <= cena && cena <= 1500) && usb >= 3 && ram >= 8 && ssd;

	bool cheap = (cena <= 800) && (!ssd || (ram < 8));
					
	bool ans = expensive || cheap;

	cout<<ans<<endl;
	return 0;
}
