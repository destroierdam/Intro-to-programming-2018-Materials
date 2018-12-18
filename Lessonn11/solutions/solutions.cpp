#include <iostream>
#include <cstring>
using namespace std;

void printASCIITable()
{
    for(char i = 0; i <= 255; i++)
    {
        cout<<(int)c<<" : "<<c<<endl;
    }
}
int myStrlen(char str[])
{
	int lengthString = 0;
	for (int i = 0; str[i] != NULL; i++)
	{
		lengthString++;
	}
	return lengthString;
}

void myStrcat(char left[], char right[])
{
	int i = myStrlen(left), j;

	for (j = 0; right[j] != '\0'; j++)
	{
		left[i + j] = right[j];
	}
	left[i + j] = '\0';
}

void myStrcpy(char dest[], char source[])
{
	int i;
	for (i = 0; source[i] != NULL; i++)
	{
		dest[i] = source[i];
	}
	dest[i] = NULL;
}

int myStrcmp(char left[], char right[])
{
	int i;
	for (i = 0; left[i] != '\0' && right[i] != '\0'; i++)
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
	if (left[i] == NULL && right[i] == NULL)
	{
		return 0;
	}
	if (left[i] == NULL)
	{
		return -1;
	}
	return 1;
}

int main()
{


	return 0;
}
