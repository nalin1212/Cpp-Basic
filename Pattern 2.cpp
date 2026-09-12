#include <bits/stdc++.h>
 // Pattern 2
using namespace std;
void print1(int n) {
        for (int i = 0; i < n; i++) {
                for (int j = 0; j<=i;j++){
                        cout << " * ";
                        // donot put endl;
                }
                cout << endl;
        }
}

int main() {
        // uses of test cases
        int t;
        cin >> t;
        for ( int i = 0; i <t; i++) {
                int n;
                cin >> n;
                print1(n);
        }
}