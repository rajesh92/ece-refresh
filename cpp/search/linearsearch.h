#include <iostream>
using namespace std;

int binarySearch(int* arr, int l, int r, int x) {
	if (r>=l) {
		int mid = l + (r-l)/2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr,l,mid-1,x);
		return binarySearch(arr,mid+1,r,x);
	}
	return -1;
}

int binary(int* arr,int n, int x) {
	return binarySearch(arr,0,n-1,x);
}

int linear(int* arr,int n, int x) {
	for(int i=0; i<n; i++) {
		if (arr[i] == x) {
			return i;
		}
	}
	return -1;
}
int main() {
	// your code goes here
	int arry[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,15,16};
	int size = sizeof(arry)/sizeof(arry[0]);
	cout << binary(arry,size,10) << endl;

	return 0;
}
