#include <bits/stdc++.h>
// Two sum problem 

using namespace std;

void print1(const vector<int>& arr, int n, int t) {
    for (int i = 0; i < n; i++) {
        
        int x = t - arr[i];
        
        // Example check (adjust logic based on your actual requirement)
        for (int j = 0; j < n; j++) {
            if (x == arr[j] && i != j) {
                cout << "true number is adding\n";
                return;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    int n; 
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print1(arr, n, t);
    return 0;
}