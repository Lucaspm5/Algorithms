#include <bits/stdc++.h>

using namespace std;

int main() {
    int best = 0, sum = 0;
    int array[3] = {3, 2, 7};
    int n = 3;
    for (int i = 0;i < n;i++) {
        sum = max(array[i], sum + array[i]);
        cout << sum << "\n"; 
        best = max(best, sum);
    }
    //cout << best << "\n";
    return 0;
}