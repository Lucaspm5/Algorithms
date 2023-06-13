#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> n;
    for (int i = 0;i < 5;i++) {
        int a;
        cin >> a;
        n.push_back(a);
    }

    sort(n.begin(), n.end(), greater<int>());

    for (auto i: n) cout << i << " ";

    cout << endl;

    reverse(n.begin(), n.end());

    for (auto x : n) cout <<x;

    return 0;
}