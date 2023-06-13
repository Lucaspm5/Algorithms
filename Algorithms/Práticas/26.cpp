#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> n;
    for (int i = 0;i < 5;i++) n.push_back(i);

    sort(n.begin(), n.end());

    for (auto i : n) cout << i << endl;
    cout << endl;
    int arr[] = {1, 33, 4, 5, 22, 9 , 8};

    sort(arr, arr + 7);

    for (auto x : arr) cout << x << endl;

    return 0;
}