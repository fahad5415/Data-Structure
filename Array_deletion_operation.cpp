#include<iostream>
using namespace std;
int main()
{
	// Deletion Operation
	
	int size, index;
	
	cout<<"\nEnter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\nEnter the elements of an Array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray before deletion: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\nEnter the index where you want to delete the element: ";
	cin>>index;
	
	for(int i=index; i<size; i++)
	{
		arr[index] = arr[index+1];
		index++;
	}
	cout<<"\nArray after deletion: ";
	for(int i=0; i<size-1; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
