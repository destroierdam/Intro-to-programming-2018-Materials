#include<iostream>
using namespace std;
int main()
{
	int n;
	bool isPower = true;
	
	cin>>n;
	
	if(n == 0) // 0 не е степен на двойката, но няма да влезе в while-а и да направи isPower = false
	{		
		isPower = false;
	}
	while(n)
	{
		if(n%2 != 0 && n != 1)
		{
			isPower = false;
		}
		n/=2;
	} 
	
	cout<<(isPower ? "YES" : "NO")<<endl;
	return 0;
}