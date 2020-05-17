#include <iostream>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0; i<n ; i++)
	{
		cin>>a[i];
	}
}
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
bool have_swap(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		if(a[i] > a[i+1]) return false;
	}
	return true;
}
void bubble_sort(int a[], int n)
{
	for(int i = 0; i<n-1 ; i++)
	{
		if(have_swap(a, n) == true){
		  break;
	}
		else{
		for(int j=n-1; j>i; j--)
		{
			if(a[j] < a[j-1]) swap(a[j], a[j-1]);
		}
	}
	}
}
void xuat(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int a[n];
	nhap(a, n);
	xuat(a, n);
	bubble_sort(a, n);
	cout<<"\nSau khi sap xep: "<<endl;
	xuat(a, n);
	return 0;
}
