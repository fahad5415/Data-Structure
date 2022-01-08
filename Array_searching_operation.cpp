#include<iostream>
using namespace std;
int main()
{
	// Searching Operation
	
	int size, key;
	
	cout<<"\nEnter the size of an Array: ";
	cin>>size;
	
	int arr[size];
	
	cout<<"\nEnter the elements of an Array: ";
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nElements of an Array: ";
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<"\nEnter the element you want to search: ";
	cin>>key;
	
	for(int i=0; i<size; i++)
	{
		if(arr[i]==key)
		{
			cout<<key<<" is at index: "<<i;
		}
	}
	return 0;
}
