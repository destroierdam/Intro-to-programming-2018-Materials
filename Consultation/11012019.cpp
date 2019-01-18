#include <iostream>
#include <cstring>
using namespace std;
int myStrlen(char * str)
{
	int br = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		br++;
	}
	return br;
}
void myStrcat(char * target, char * from)
{
	int targetLength = myStrlen(target);
	int i;
	for (i = targetLength; from[i-targetLength] != '\0'; i++)
	{
		target[i] = from[i-targetLength];
	}
	from[i] = '\0';
}
int myStrcmp(char * left, char * right)
{
	int i;
	for (int i = 0; left[i] != '\0' && right[i] != '\0'; i++)
	{
		if (left[i] < right[i])
		{
			return -1;
		}
		else if (left[i] > right[i])
		{
			return 1;
		}
	}

	if (myStrlen(left) > myStrlen(right))
	{
		return 1;
	}
	if (myStrlen(left) < myStrlen(right))
	{
		return -1;
	}
	return 0;

	if (left[i] == '\0' && right[i] == '\0')
	{
		return 0;
	}
	if (left[i] == '\0')
	{
		return 1;
	}
	return -1;
}
int recursiveStrlen(char * str)
{
	if (str[0] == '\0') return 0;

	return 1 + recursiveStrlen(str + 1);
}
// Връща броя на символите 't' в стринга str
int ts(char * str)
{
	if (str[0] == '\0') return 0;

	if (str[0] == 't') return 1 + ts(str + 1);
	return ts(str + 1);
}
void print(int * arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << endl;
	}
}
void printRecursive(int * arr, int sz)
{
	if (sz == 0) return;

	cout << arr[0] << endl;

	printRecursive(arr + 1, sz - 1);
}

int countEven(int * arr, int sz)
{
	if (sz == 0) return 0;

	if (arr[0] % 2 == 0)
	{
		return 1 + countEven(arr + 1, sz - 1);
	}
	return countEven(arr + 1, sz - 1);
}
// Пресмята сумата на всички четни числа по-малки от n
int danielTask(int n,int nOrig)
{
	if (n == 0) return 0;
	if (n % 2 == 0 && n != nOrig) return n + danielTask(n - 1,nOrig);
	return danielTask(n - 1,nOrig);
}
// pomaga za krasota;da pishem samo edno n
int wrapper(int n)
{
	return danielTask(n, n);
}
void printASCIITable()
{
	for (char i = 0; i < 127; i++)
	{
		cout << "The " << (int)i << " charin the table is '" << i << "'" << endl;

	}
	for (int i = 0; i < 255; i++)
	{
		cout << i << " " <<i << endl;
	}
}
void shiftLeft(char * str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		str[i] = str[i + 1];
	}
}
void changeString(char * str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{

		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e')
		{

			shiftLeft(str+i);
			i--;
		}
	}
}
int main()
{
	char str[128] = "AA test";
	changeString(str);
	cout << str << endl;
	return 0;
}
