#include <bits/stdc++.h>
 // Pattern 3
using namespace std;
void print3(int n) {
        for (int i = 0; i < n; i++) {
                for (int j = 1; j <=i;j++) {
                        cout << i;
                }
                cout << endl;
        }
}

int main() {
        // uses of test cases
        int t;
        cin >> t;
        for (int i = 0; i < t; i++) {
                int n;
                cin >> n;
                print3(n);
        }
}