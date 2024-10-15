#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int N, K, H1=0, H2, res; // H1 & H2 = temp house positions
    cin >> N >> K;
    res = (N*(N+1))/2;
    if(K) cin >> H1;
    res -= ((H1-1)*(H1))/2;
    for(long long int i = 1; i<K; i++){
        cin >> H2;
        res -= ((H2-H1-1)*(H2-H1))/2;
        H1 = H2;
    }
    res -= ((N-H1)*(N+1-H1))/2;
    cout << res;
}
