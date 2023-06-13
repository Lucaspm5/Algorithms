#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> n;
    int add;

    for (int i = 0;i < 5;i++) {
        cin >> add;
        n.push_back(add);
    }

    n.erase(n.begin(), n.begin() + 2);

    for (auto i : n) cout << i;
    
    return 0;
}