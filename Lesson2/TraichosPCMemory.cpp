#include<iostream>
using namespace std;
int main()
{
	long long int n, m, k;
	
	cin>>n>>m>>k;
	
	long long int songInSeconds = n*60 + m;
	
	long long int spaceNeededInKB = songInSeconds * 16;
	long long int freeSpaceInKB = k*1024;
	
	// Ако песента е по-малка или равна на свободното пространство
	if(spaceNeededInKB <= freeSpaceInKB)
	{
		cout<<"YES"<<endl;
	}
	else // Ако е по-голяма
	{
		cout<<"NO"<<endl<<spaceNeededInKB - freeSpaceInKB<<endl;
	}
	return 0;
}