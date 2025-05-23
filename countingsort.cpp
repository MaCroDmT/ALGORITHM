#include <iostream>

using namespace std;

void countSort(int arr[], int n, int k) {
    int count[k + 1] = {0};
    int output[n];

    for (int j = 0; j < n; j++)
        count[arr[j]]++;

    for (int i = 1; i <= k; i++)
        count[i] += count[i - 1];

    for (int j = n - 1; j >= 0; j--) {
        output[count[arr[j]] - 1] = arr[j];
        count[arr[j]]--;// ekhane agevdiye value ta ke predecrement kore dicchi
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main() {
    int arr[] = {4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    countSort(arr, n, k);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
