#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, p, y, j, d = 12, Y, P, S; // Y = Yertle’s age, P = Puff’s age, S = Spot’s age
    while(cin >> s >> p >> y >> j) {
        Y = (d + j - p - y) / 3; // It is necessary to calculate each age 
        P = (d + j - s - Y) / 2; // separately due to the difference in decimals (months)
        S = (d + j - P - Y); // Shout out to @An-Gi for the solution
        cout << S << " " << P << " " << Y << "\n";
    }
    return 0;
}
