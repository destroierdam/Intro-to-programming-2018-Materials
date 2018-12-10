#include <iostream>
using namespace std;
void swap(int& left, int& right)
{
	int temp = left;
	left = right;
	right = temp;
}
void reverse(int * arr, int sz)
{
	for (int i = 0; i < sz/2; i++)
	{
		swap(arr[i], arr[sz - i - 1]);
	}
}
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	const int sz = 4;
	int arr[sz] = {1, 2, 3, 4};

	cout << "Before reversing: " << endl;
	print(arr, sz);

	reverse(arr, sz);

	cout << "After reversing: "<<endl;
	print(arr, sz);

	return 0;
}
