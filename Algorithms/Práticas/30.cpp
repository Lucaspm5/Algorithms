#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() 
{
    int N, B;
    while (cin >> N >> B && N && B) 
    {
        int bolas[B];
        bool possiveis[N+1];
        memset(possiveis, false, sizeof(possiveis));
        for (int i = 0; i < B; i++) {
            cin >> bolas[i];
        }
        for (int i = 0; i < B; i++) {
            for (int j = 0; j < B; j++) {
                possiveis[abs(bolas[i] - bolas[j])] = true;
            }
        }
        if (all_of(possiveis, possiveis + N + 1, [](bool v) { return v; })) {
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }
    return 0;
}
