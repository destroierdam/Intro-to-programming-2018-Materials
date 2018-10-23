#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin>>a>>b>>c;
	
	// Пишем неравенството на триъгълника
	// Може да е и с равно
	if(a<(b+c) && b<(a+c) && c<(a+b))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}