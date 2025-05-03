#include <bits/stdc++.h>
using namespace std;

void merge (vector<int>&arr, int l, int mid, int r) {
    int sz1 = mid - l + 1;
    int sz2 = r - mid;
    vector<int>L(sz1), R(sz2);
    for (int i = 0; i < sz1; i++)
        L[i] = arr[l + i];
    for (int i = 0; i < sz2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < sz1 && j < sz2) {
        if (L[i] <= R[j])
            arr[k] = L[i++];
        else
            arr[k] = R[j++];
        k++;
    }
    while (i < sz1) arr[k++] = L[i++];
    while (j < sz2) arr[k++] = R[j++];
}

void mergeSort(vector<int>&arr, int l, int r) {
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr,mid + 1, r);
    merge(arr, l, mid, r);
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
    mergeSort(arr, 0, n - 1);
    display(arr);
    return 0;
}
