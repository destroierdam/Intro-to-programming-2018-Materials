#include<iostream>
using namespace std;
double func(double * arr, int sz)
{
	if(sz == 0) return 1;
	if(sz == 1) return 1;
	
	if(arr[1] > 0 && arr[1] < arr[0])
	{
		return arr[1]*func(arr+1,sz-1);
	}
	return func(arr+1,sz-1);
}	
int main()
{
	const int MAX_SZ = 128;
	double arr[MAX_SZ] = {2.1, 0, 9.9, 3, 1, -1, 14.5, 7};
	int sz = 8;
	
	cout<<func(arr,sz)<<endl;
	return 0;
}