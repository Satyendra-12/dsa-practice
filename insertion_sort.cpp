#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    int i = 1;
    while (i < n) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 2, 6, 4, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    print(arr, n);
    return 0;
}
