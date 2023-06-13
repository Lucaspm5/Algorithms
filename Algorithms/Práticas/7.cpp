#include <bits/stdc++.h>

using namespace std;

bool ordena(int a, int b) {
    return a > b;
}

int main()
{
    vector <int> n;
    int add;
    for (int i = 0;i < 5;i++) {
        cin >> add;
        n.push_back(add);
    }
    sort(n.begin(), n.end(), ordena);

    for (auto i : n) cout << i;

    return 0;
}