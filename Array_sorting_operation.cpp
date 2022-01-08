#include<iostream>
using namespace std;
int main()
{
	// Sorting Operation
	
	int size, temp;
	
	cout<<"\nEnter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\nEnter the elements of an Array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nArray before sorting: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	// Sorting operation starts from here
	
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(arr[j]<arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	cout<<"\nArray after sorting: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
