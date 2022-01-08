#include<iostream>
using namespace std;

// Binary Searching

template<class T> int binarySearch(T a[], int l, int r, const T& key)
{
	while(l<=r)
	{
		int m = (l+r)/2;
		if(key<a[m]) r = m-1;
		else if(key>a[m]) l = m+1;
		else return m;
	}
	return -1;
}

int main()
{
	int a[] = {2,4,6,8,10}, key=4;
	int pos = binarySearch(a, 0, 4, key);
	if(pos == -1)
	{
		cout<<key<<" NOT FOUND";
	}
	else
	{
		cout<<key<<" is at index "<<pos;
	}
	return 0;
}
