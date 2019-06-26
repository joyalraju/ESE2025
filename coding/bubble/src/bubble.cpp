//============================================================================
// Name        : bubble.cpp
// Author      : joyal raju
// Version     :
// Copyright   : Your copyright notice
// Description : bubble sorting in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void print(int *arr, int n)
{
cout<< endl;
for(int i = 0; i!=n; i++)
cout<< arr[i]<<" ";

}

void swap (int *arr, int n, int m )
{
int store = arr[n];
arr[n]= arr[m];
arr[m]=store;
return;
}

int main() {

	int arr[]={10,15,31,6,2,7,1,5};
	int n=8;
	cout << "orginal array" << endl;
	for(int j=0;j!=n;j++ )
	cout << arr[j] << " ";
	cout<<endl;
	bool flag=1;
	cout << "sorted array" ;
	while(flag)
	{
		flag=0;
		for(int j=0;j!=n-1;++j)
			if(arr[j]>arr[j+1])
			{
				swap(arr,j,j+1);
				flag=1;

			}

	}
	print(arr,n);
	return 0;
}
