#include<iostream>
using namespace std;
const int MAX_N = 128;

/// size_t is the same as unsigned int

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
		if('a' <= toLower(str[i]) && toLower(str[i] <= 'z')) // is a better alternative
		{
			size_t index = str[i] - 'a';
			br[index]++;
		}
		*/
	}
}

bool cmpBr(size_t * br1, size_t * br2, size_t maxSz)
{
	for (size_t i = 0; i < maxSz; i++)
	{
		// If the set of the two strings are different
		if((br1[i] == 0 && br2[i] != 0) || (br1[i] != 0 && br2[i] == 0))
		{
			return false;
		}
		// If the symbol exists in the first string more than it exists in the second
		if(br1[i] > br2[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	char str1[128] = "assdqwe";
	char str2[128] = "qweasds";

	const size_t ALPHAS = 32;

	size_t str1Br[ALPHAS] = { 0 };
	size_t str2Br[ALPHAS] = { 0 };

	count(str1, str1Br);
	count(str2, str2Br);

	cout << (cmpBr(str1Br, str2Br, ALPHAS) ? "YES" : "NO") << endl;
	return 0;
}