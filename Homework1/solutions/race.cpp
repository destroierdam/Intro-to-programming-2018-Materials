#include<iostream>
using namespace std;
int main()
{
	int startMin, startSec, endMin, endSec, n, bestTime, winner, i;
	cin>>n;
	for(i = 1;i<=n;i++)
	{
		cin>>startMin>>startSec>>endMin>>endSec;
		
		startSec += startMin * 60;
		endSec += endMin * 60;
		
		endSec -= startSec;
				
		if(endSec < bestTime)
		{
			bestTime = endSec;
			winner = i;
		}
	}
	cout<<winner<<": "<<bestTime/60<<":"<<bestTime%60<<endl;
	return 0;
}