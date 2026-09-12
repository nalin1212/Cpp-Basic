#include <bits/stdc++.h>
// square pattern
using namespace std;
void print1(int n) {
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
            // donot put endl;
        }
        cout << endl;
    }
}

int main() {
    // integer given by user 
    int n;
    cin>>n;

    print1(n);
}