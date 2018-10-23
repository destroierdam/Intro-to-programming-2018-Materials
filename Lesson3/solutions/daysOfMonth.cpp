#include <iostream>
using namespace std;
int main()
{
	int month, year;
	cin>>month>>year;
	
	bool y4 = year % 4 == 0;
	bool y100 = year % 100 == 0;
	bool y400 = year % 400 == 0;
	
	bool isLeap = (y4 && !y100) || y400;
	
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<31<<endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout<<30<<endl;
			break;
		case 2:
			cout<<28 + isLeap<<endl;
			break;
		default:
			cout<<"Invalid input"<<endl;
	}
	return 0;
}