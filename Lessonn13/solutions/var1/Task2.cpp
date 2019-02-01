#include<iostream>
using namespace std;
void countLetters(char * str, int * strBr)
{
	// The letter A will occupy position 0, the letter B - position 1 and so on
	for(int i = 0; str[i]; i++)
	{
		if('A' <= str[i] && str[i] <= 'Z')
		{
			strBr[str[i]-'A']++;
		}
		else if('a' <= str[i] && str[i] <= 'z')
		{
			strBr[str[i]-'a']++;
		}
	}
}
/// Compares if the two arrays are equal
bool areEqual(int * arr1,int * arr2, int sz)
{
	for(int i = 0; i < sz; i++)
	{
		if(arr1[i] != arr2[i])
		{
			return false;
		}
	}
	return true;
}
bool areAnagrams(char * str1,char * str2)
{
	// On every position of br will be positioned the number of times the letter is present in the string
	int str1Br[32] = {0};
	int str2Br[32] = {0};
	
	countLetters(str1,str1Br);
	countLetters(str2,str2Br);
	
	return areEqual(str1Br,str2Br,32);
}
int main()
{
	char str1[] = "A B B A";
	char str2[] = "baba";
	
	cout<<(areAnagrams(str1,str2) ? "YES" : "NO")<<endl;
	return 0;
}