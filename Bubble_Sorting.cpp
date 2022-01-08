#include<iostream>
using namespace std; 
int main()
{
	// Bubble Sorting
	
	int size, temp;
	
	cout<<"\nEnter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\nEnter the elements of an Array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray before Bubble Sorting: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	for(int i=size-1; i>1; i--)
	{
		for(int j=0; j<size-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	cout<<"\nArray after bubble sorting: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
