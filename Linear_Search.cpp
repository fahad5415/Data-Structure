#include<iostream>
using namespace std;

// Linear Searching

template<class T> int linearSearch(T a[], const T& key)
{
	for(int i=0; i<5; i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[] = {2,4,6,8,10}, key=6;
	int pos = linearSearch(a, key);
	if(pos == -1)
	{
		cout<<key<<"NOT FOUND";
	}
	else 
	{
		cout<<key<<" is at index "<<pos;
	}
	return 0;
}
