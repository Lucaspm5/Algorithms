#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> n;

    for (int i = 0;i < 5;i++) n.push_back(i);

    for (auto i : n) cout << i;
    cout << endl;

    while (!n.empty()) {
        n.pop_back();
    }

    for (auto i : n) cout << i;
    
    return 0;
}