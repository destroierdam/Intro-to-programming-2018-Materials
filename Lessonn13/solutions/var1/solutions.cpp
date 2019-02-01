#include <iostream>
using namespace std;
const int MAX_N = 128;

// Read matrix
void read(int  matrix[][MAX_N], size_t & sz)
{
	cin >> sz;
	for (unsigned int i = 0; i < sz; i++)
	{
		for (size_t j = 0; j < sz; j++)
		{
			cin >> matrix[i][j];
		}
	}
}

int sumPrimary(int matrix[][MAX_N], size_t sz)
{
	int br = 0;
	for (size_t i = 0; i < sz; i++)
	{
		br += matrix[i][i];
	}
	return br;
}

int sumSecondary(int matrix[][MAX_N], size_t sz)
{
	int br = 0;
	for (size_t i = 0; i < sz; i++)
	{
		if (sz % 2 != 0 && i != sz - i - 1)
		{
			br += matrix[i][sz - i - 1];
		}
		else if (sz % 2 == 0)
		{
			br += matrix[i][sz - i - 1];
		}
	}
	return br;
}
bool isPrime(int n)
{
	if (n <= 0) return false;
	if (n == 1) return true;
	return (n % 2 == 0) && isPrime(n / 2);
}
void test1()
{
	int matrix[MAX_N][MAX_N];
	size_t n;
	read(matrix, n);

	int res = sumPrimary(matrix, n) + sumSecondary(matrix, n);

	cout << res << endl;
	cout << (isPrime(res) ? "YES" : "NO") << endl;
}
void count(char * str, size_t * br)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			size_t index = str[i] - (int)'A';
			br[index]++;
		}

		if ('a' <= str[i] && str[i] <= 'z')
		{
			size_t index = str[i] - 'a';
			br[index]++;
		}

		/*
		if('a' <= toLower(str[i]) && toLower(str[i] <= 'z'))
		*/
	}
}

bool cmpBr(size_t * br1, size_t * br2, size_t maxSz)
{
	for (size_t i = 0; i < maxSz; i++)
	{
		if (br1[i] != br2[i])
		{
			return false;
		}
	}
	return true;
}
void test2()
{
	char str1[128] = "A B B A";
	char str2[128] = "baba";

	const size_t ALPHAS = 32;

	size_t str1Br[ALPHAS] = { 0 };
	size_t str2Br[ALPHAS] = { 0 };

	count(str1, str1Br);
	count(str2, str2Br);

	cout << (cmpBr(str1Br, str2Br, ALPHAS) ? "YES" : "NO") << endl;
}
double recursion(double * arr, size_t sz)
{
	if (sz < 2) return 1;
	if (arr[1] > 0 && arr[1] < arr[0])
	{
		return arr[1] * recursion(arr + 1, sz - 1);
	}
	return recursion(arr + 1, sz - 1);
}
void test3()
{
	double arr[] = { 2.1, 0, 9.9, 3, 1, -1, 14.5, 7 };

	cout << recursion(arr, 8) << endl;
}
int main()
{
	return 0;
}