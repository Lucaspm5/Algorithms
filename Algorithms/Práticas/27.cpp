#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> n;
    for (int i = 5;i >= 0;i--) n.push_back(i);

    sort(n.begin(), n.end());

    if (binary_search(n.begin(), n.end(), 2)) cout << "2 encontrado" << endl;

    return 0;
}