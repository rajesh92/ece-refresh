/*
Sorting integers

1. Selection Sort
Algo Description:
    Find the smallest and place it at the start location (0,1,2,..)
Worst Case Time Complexity: O(n^2)
Best Case Time Complexity: O(n^2)
Space Complexity: O(1) ... in-place sort
Maximum Swaps maybe needed = O(n)

2. Bubble Sort
Algo Description:
    1. Compare two and swap. Smallest will bubble up to the front
    2. Inner loop always has last elements sorted so it will run only till n-j-1 in each iteration
Worst Case Time Complexity: O(n^2)
***Best Case Time Complexity: O(n) ...if the elements are already sorted***
Space Complexity: O(1)  ... in-place sort

3. Insertion Sort
Algo Description:
    1. Like a deck of cards insert the value at the correct location push others back
Worst Case Time Complexity: O(n^2) .. maximum time to sort if elements are reversed
Best Case Time Complexity: O(n) .. minimum time elements are sorted
Space Complexity: O(1)
It is also an online sorting method. If you have a stream of data which you have to keep sorted then this would be ideal.

4. Merge Sort
Algo Description:
    Uses divide and conquer algorithm.
    1. Keep dividing input array into two halves
    2. Call merge which sorts the elements.
Worst Case Time Complexity: O(nlogn)
Best Case Time Complexity: O(nlogn)
Space Complexity: O(n)

5. Quick Sort
Algo Description:
Worst Case Time Complexity: O(n^2)
Best Case Time Complexity: O(nlogn) .. also average case is O(nlogn)
Space Complexity: O(1) .. in-place sort

*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection (vector<int>& v) {
    int n = v.size();
    for (int j = 0; j < n; j++) {
        int min = INT_MAX;
        int min_idx = j;
        for (int i = j; i < n; i++) {
            if (v[i] < min) {
                min = v[i];
                min_idx = i;
            }
        }
        swap(&v[j],&v[min_idx]);
    }
}

void bubble (vector<int>& v) {
    int n = v.size();

    for (int j = 0; j < n-1; j++) {
        bool swapped = false;
        // inner loop goes till n-j-1 as the last element always get sorted first
        for (int i = 0; i < n-j-1; i++) {
            if (v[i] > v[i+1]) {
                swap(&v[i],&v[i+1]);
                swapped = true;
            }
        }

        // if there is no swap then the vector is already sorted. This gives best case O(n)
        if (!swapped) {
            break;
        }
    }
}


void insertion (vector<int>& v) {
    int n = v.size();
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i-1;
        while (j >= 0 && v[j] > key) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

//Utility function
void merge (vector<int>& v, int l, int m, int r) {
    vector<int> L;
    vector<int> R;
    int lf = m - l + 1;
    int rf = r - m;
    for (int i = 0; i < lf; i++) {
        L.push_back(v[i+l]);
    }
    for (int i = 0; i < rf; i++) {
        R.push_back(v[m+i+1]);
    }

    int i = 0, j = 0, k = l;

    while (i < lf && j < rf) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < lf) {
        v[k] = L[i];
        i++;
        k++;
    }

    while (j < rf) {
        v[k] = R[j];
        j++;
        k++;
    }
}

//Utility function
void mergesort (vector<int>& v, int l, int r) {
    if (l < r) {
        int m = l + (r-l)/2;
        mergesort (v,l,m);
        mergesort (v,m+1,r);
        merge (v,l,m,r);
    }
}


void merge (vector<int>& v) {
    int n = v.size();
    mergesort(v,0,n-1);
}

int partition (vector<int>& v, int l, int r) {
    int pivot = v[r];
    int j = l - 1;

    for (int i = l; i < r; i++) {
        if (v[i] <= pivot) {
            j++;
            swap (&v[j], &v[i]);
        }
    }
    swap (&v[j+1],&v[r]);
    return (j+1);
}

void quicksort (vector<int>& v, int l, int r) {
    if (l < r) {
        int part = partition (v, l ,r);
        quicksort (v, l, part-1);
        quicksort (v, part+1, r);
    }
}

void quick (vector<int>& v) {
    int n = v.size();
    quicksort (v, 0, n-1);
}

int main() {
    int arr[] = {3,2,4,1,5,6};
    vector<int> v = {3,-2,-44,17,-121,43,434,77,5,0,6};
    selection (v);
    for (auto &x : v) {
        cout << x << "\t" ;
    }
    cout << endl;
    bubble (v);
    for (auto &x : v) {
        cout << x << "\t" ;
    }
    cout << endl;
    insertion (v);
    for (auto &x : v) {
        cout << x << "\t" ;
    }
    cout << endl;
    merge (v);
    for (auto &x : v) {
        cout << x << "\t" ;
    }
    cout << endl;
    quick (v);
    for (auto &x : v) {
        cout << x << "\t" ;
    }
    cout << endl;
    return 0;
}
