#include <bits/stdc++.h>

using namespace std;

bool is_prime(int x)
{
    bool primo = true;
    for (int i = 2;i < x;i++) {
        if (x % i == 0) {
            primo = false;
            break;
        }
    }
    return primo;
}

int main()
{
    vector <int> primo, not_primo;

    int add;

    for (int i = 0;i < 5;i++) {
        cin >> add;
        (is_prime(add)) ? primo.push_back(add) : not_primo.push_back(add);
    }

    if (primo.size() > 0) {
        for (auto i : primo) cout << i;
    }
    cout << endl;
    if (not_primo.size() > 0) {
        for (auto i : not_primo) cout << i;
    }
    return 0;
}