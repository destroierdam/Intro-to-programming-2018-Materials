#include<iostream>
using namespace std;
int main()
{
	int itemLeva, itemStot, paidLeva, paidStot;
	
	cin>>itemLeva>>itemStot>>paidLeva>>paidStot;
	
	// Да направим покупката изцяло в стотинки
	itemStot += itemLeva * 100;
	
	// Да направим платеното изцяло в стотинки
	paidStot += paidLeva * 100;
	
	int resto = paidStot - itemStot;
	
	// Изкарваме рестото в лева и стотинки
	cout<<resto/100<<" "<<resto%100<<endl;
	return 0;
}