#include <iostream>

using namespace std;

int Partition(int A[], int start, int end) {
    int i = start + 1;
    int piv = A[start];
    for (int j = start + 1; j <= end; j++) {
        if (A[j] < piv) {
            swap(A[i], A[j]);
            i += 1;
        }
    }
    swap(A[start], A[i - 1]);
    return i - 1;
}

void QuickSort(int A[], int start, int end) {
    if (start < end) {
        int piv_pos = Partition(A, start, end);
        QuickSort(A, start, piv_pos - 1);
        QuickSort(A, piv_pos + 1, end);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int A[n];
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    QuickSort(A, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}
