#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int X, N;
    while (cin >> X >> N && X && N) {
        int hsh[X+1];
        memset(hsh, 0, sizeof(hsh));
        for (int i = 0; i < N; i++) {
            int T;
            cin >> T;
            hsh[T]++;
        }
        int count = 0;
        for (int i = 1; i <= X; i++) {
            if (hsh[i] > 1) count += hsh[i] - 1;
        }
        cout << count << endl;
    }
    
    return 0;
}
