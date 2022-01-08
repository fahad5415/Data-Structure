#include<iostream>
using namespace std;
int main()
{
	// Merging operation
	
	int a,b,c;
	
	cout<<"\nEnter the size of the first Array: ";
	cin>>a;
	
	cout<<"\nEnter the size of the second Array: ";
	cin>>b;
	
	cout<<"\nEnter the size of the third Array: ";
	cin>>c;
	
	int arr[a], arr2[b], arr3[c];
	
	cout<<"\nEnter the elements of the first Array: ";
	for(int i=0; i<a; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nElements of the first Array: ";
	for(int i=0; i<a; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\nEnter the elements of the second Array: ";
	for(int i=0; i<b; i++)
	{
		cin>>arr2[i];
	}
	
	cout<<"\nElements of the second Array: ";
	for(int i=0; i<b; i++)
	{
		cout<<arr2[i]<<"\t";
	}
	
	for(int i=0; i<a; i++)
	{
		arr3[i] = arr[i];
		arr3[i+b] = arr2[i];
	}
	
	cout<<"\nArray after the merging operation: ";
	for(int i=0; i<c; i++)
	{
		cout<<arr3[i]<<"\t";
	}
	
	return 0;
}
