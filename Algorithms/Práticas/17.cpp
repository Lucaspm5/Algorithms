#include <bits/stdc++.h>

using namespace std;
typedef vector <int> ve;
int main()
{
    ve arr;
    int t;
    cin >> t;
    while(t--) {
        int x, a;
        int cont = 0;
        cin >> x;
        for (int i = 0;i < x;i++) {
            cin >> a;
            arr.push_back(a);
            if (arr[i] >= 1000) cont++;
        }
        while(!arr.empty()) arr.pop_back();
        
        cout << cont << endl;
    }
    return 0;
}