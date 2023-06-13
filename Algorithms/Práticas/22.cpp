#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        int odd = 0;
        for (auto p : count) {
            if (p.second % 2 == 1) {
                odd++;
            }
        }
        if (odd == 0) {
            cout << 0 << endl;
        } else {
            cout << odd - 1 << endl;
        }
    }
    return 0;
}
