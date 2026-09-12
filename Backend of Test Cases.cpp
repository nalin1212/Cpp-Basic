#include <bits/stdc++.h>
 // Pattern 1 
using namespace std;
void print1(int n) {
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cout << "*";
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