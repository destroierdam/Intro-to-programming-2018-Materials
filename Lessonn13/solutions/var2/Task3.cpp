#include<iostream>
using namespace std;

double recursion(double * arr, size_t sz)
{
	if (sz < 2) return 0;
	
	if (arr[0] >= 0 && arr[1] < arr[0])
	{
		return arr[0] + recursion(arr + 1, sz - 1);
	}
	return recursion(arr + 1, sz - 1);
}

int main()
{
	double arr[] = {2, -1.9, 1.1, 3.5, 1, 0, 8.3};
	size_t sz = 7;
	
	cout<<recursion(arr,sz)<<endl;
	return 0;
}