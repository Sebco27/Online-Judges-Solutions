#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, n, m;
    cin >> T;
    while(T--) {
        cin >> n >> m;
        cout << n*(m-n) + ((n-1)*n)/2 << "\n";
    }
    return 0;
}
