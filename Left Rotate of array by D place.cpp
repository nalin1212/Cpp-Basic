#include <bits/stdc++.h>
//left rotate of array by d place  
using namespace std;

void left_rotate(int arr[], int n, int d) {     vector<int> temp(n);
     for(int i = 0; i < n; i++){
         temp[i] = arr[i];
     }
     for(int i = d; i < n; i++){
         arr[i - d] = arr[i];
     }
     for(int i = n - d; i < n; i++){
         arr[i] = temp[i - (n - d)];
     } 
}

int main() {
    int d;
    cin >> d;
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++){
         cin >> arr[i];
    }
    
    left_rotate(arr.data(), n, d);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}