#include <bits/stdc++.h>
using namespace std;

int main() {
    int ff, cc, ce; // ff = rows, cc = columns, ce = corner color
    cin >> ff >> cc >> ce;
    while(ff){
        cout << (ce ? ((ff-7)*(cc-7)+1)/2 : ((ff-7)*(cc-7))/2) << "\n";
        cin >> ff >> cc >> ce;
    }
    return 0;
}
