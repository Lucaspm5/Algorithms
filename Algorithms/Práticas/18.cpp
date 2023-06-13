#include <iostream>
#include <cmath>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    int N, M, L, R;
    cin >> N >> M >> L >> R;
    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = i; k <= N; k++) {
                for (int l = (k == i ? j + 1 : 1); l <= M; l++) {
                    int dx = abs(i - k);
                    int dy = abs(j - l);
                    double d = sqrt(dx * dx + dy * dy);
                    if (d >= L && d <= R) {
                        ans++;
                        ans %= MOD;
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
