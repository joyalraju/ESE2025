
#include <iostream>
using namespace std;
void quick(int arr[], int left, int right) {

      int i = left, j = right;

      int temp;

      int pivot = arr[(left + right) / 2];

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  temp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = temp;

                  i++;

                  j--;
            }

      };

      if (left < j)

            quick(arr, left, j);

      if (i < right)

            quick(arr, i, right);

}

int main() {

	int a[]={2,45,7,78,52,3,1};
	quick(a,0,6);
	for(int i=0;i<7;i++)
	cout << a[i]<< " " ;
	return 0;
}
