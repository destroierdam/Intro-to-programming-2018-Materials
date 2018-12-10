#include <iostream>
using namespace std;
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int sum(int* arr, int sz)
{
	int suma = 0;
	for (int i = 0; i < sz; i++)
	{
		suma += arr[i];
	}
	return suma;
}
void minSum(int* arr1, int sz1, int * arr2, int sz2, int*& ptr)
{
	int sum1 = sum(arr1, sz1);
	int sum2 = sum(arr2, sz2);
	if (sum1 < sum2)
	{
		ptr = arr1;
	}
	else
	{
		ptr = arr2;
	}
	cout << *ptr << endl;
}

int main()
{

	const int sz1 = 5, sz2 = 2;
	int arr1[sz1] = {5, 10, 11, 14, 6};
	int arr2[sz2] = {100, 200};
	int * ptr = nullptr;
	minSum(arr1, sz1, arr2, sz2, ptr);

	cout << ptr[0] << endl; // Трябва да е 5

	return 0;
}
