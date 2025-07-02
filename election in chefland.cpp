#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n];
        int count = 0; 

        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }

        for (int i = 0; i < n; ++i) {
            if (a[i] >= x) {
                count++;
            }
        }

        cout << count << endl; 
    }

    return 0;
}
