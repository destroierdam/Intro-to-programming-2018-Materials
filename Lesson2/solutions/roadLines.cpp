#include<iostream>
using namespace std;
int main()
{
	int n, ans;
	
	cin>>n;
	
	// По Малкия Гаус, но умножен по две, защото се връща всеки път
	ans = (n+1)*n;
	
	cout<<ans<<endl;
	return 0;
}