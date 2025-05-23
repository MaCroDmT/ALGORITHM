#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[] = { 1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted array in descending order: ";
    for (int i = n - 1; i >= 0; i--)
    cout << arr[i] << " ";
    return 0;
}
