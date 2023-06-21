#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main() {
    vi arr = {1, 9, 7, 6, 11, 2};

    sort(arr.begin(), arr.end());

    for (auto i : arr) cout << i << " ";

    int array[5] = {1, 2, 3, 4, 5};
    sort(array, array+5);
    for (auto i :array) cout << i << " ";
    string name = "lucas";
    sort(name.begin(), name.end());
    cout << name;
    return 0;
}
struct P {
    int x, y;
    bool operator<(const P &p) 
    {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};
