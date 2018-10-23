#include <iostream>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	
	switch(n)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 7:
			cout<<0<<endl;
			break;
		case 0:
		case 6:
		case 9:
			cout<<1<<endl;
			break;
		case 8:
			cout<<2<<endl;
			break;
		default:
			cout<<"Not a digit"<<endl;
	}
	return 0;
}