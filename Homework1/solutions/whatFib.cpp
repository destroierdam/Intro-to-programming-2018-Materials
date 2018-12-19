#include <iostream>
using namespace std;
int main() 
{
	int n = 0;
	// 0, 1, 1, 2, 3, 5, 8 - Fibonacci
	// 0, 1, 2, 3, 4, 5, 6 - Poreden nomer
	int prev2 = 0, prev1 = 1, cur = prev2 + prev1;
	int br = 2; // cur == vtoroto 1, znachi trqbva da prebroim pyrvite tri chisla(0, 1 i vtoroto 1)

	cin >> n;

	while (cur < n)
	{
		prev2 = prev1;
		prev1 = cur;
		cur = prev2 + prev1;
		
		br++;
	}

	if (cur == n)
	{
		cout << br;
	}
	else
	{
		cout << -1;
	}
	
	cout << endl;
	return 0;
}