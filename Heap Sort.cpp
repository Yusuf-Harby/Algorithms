#include <bits/stdc++.h>
using namespace std;

void maxHeapify(vector<int>&arr, int sz, int node) {
    int left = node * 2 + 1;
    int right = node * 2 + 2;
    int max = node;

    if (left < sz && arr[left] > arr[max])
        max = left;
    if (right < sz && arr[right] > arr[max])
        max = right;

    if (max != node) {
        swap(arr[node], arr[max]);
        maxHeapify(arr, sz, max);
    }
}

void build(vector<int>&arr, int sz) {
    for (int i = sz / 2 - 1; ~i; i--)
        maxHeapify(arr, sz, i);
}

void heapSort(vector<int>&arr, int sz) {
    build(arr, sz);
    for (int i = sz - 1; i; i--) {
        swap(arr[0], arr[i]);
        sz--;
        maxHeapify(arr, sz, 0);
    }
}

void display(vector<int>&arr){
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main () {
    int n; cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
    heapSort(arr, n);
    display(arr);
    return 0;
}
