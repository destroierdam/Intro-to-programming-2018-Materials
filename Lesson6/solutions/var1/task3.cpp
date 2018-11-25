#include <iostream>
using namespace std;
int main()
{
	int n, k;
	int sumDels = 0;

	cin >> n >> k;
	
  // i ще върви през всички числа от n+1 докато не намерим отговора на задачата
	for (int i = n + 1;; i++)
	{
		sumDels = 0;
		
    // Да намерим сумата на делителите на i
		for (int j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
			    sumDels += j;
		    }
		}
		
		if (sumDels == k) 
		{	
			cout << i << endl;
			break;
		}
	}

	return 0;
}

