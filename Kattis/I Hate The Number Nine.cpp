#include <bits/stdc++.h>
using namespace std;

long long int modMul(long long int a, long long int b, long long int mod){ // O(log(b))
    long long int res = 0;
    a%=mod;
    while(b > 0){ // Russian multiplication
        if(b % 2) res = (res + a) % mod;
        a = (a * 2) % mod;
        b /= 2;
    }
    return res % mod;
}

long long int modLogExp(long long int base, long long int exp, long long int mod){ // O(log(exp))
    if (exp == 0) return 1;
    if (exp == 1) return base;
    long long int res = modLogExp(base, exp/2, mod) % mod;
    res = modMul(res,res,mod);
    if(exp % 2) res = modMul(res,base,mod);
    return res;
}

int main(){
    long long int T, d, mod = 1000000007; cin >> T;
    for(long long int i = 0; i<T; i++){
        cin >> d;
        cout << modMul(8,modLogExp(9, d-1, mod),mod) << endl;
    }
    return 0;
}
