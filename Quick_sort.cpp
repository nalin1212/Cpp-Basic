#include <bits/stdc++.h>

using namespace std;

int part(vector<int> &arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pindex = part(arr, low, high);
        qs(arr, low, pindex - 1);
        qs(arr, pindex + 1, high);
    }
}

// Driver code
int main() {
    // Input array
    vector<int> arr = {
        12,
        3,
        4,
        65,
        34,
        8,
        987,
        2,
        0,
        344
    };

    // Sort the array
    qs(arr, 0, arr.size() - 1);

    // Print the result
    for (int value : arr) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}