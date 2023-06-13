#include <iostream>
using namespace std;

int main() {
    int N;
    while (cin >> N && N) {
        int mary_wins = 0;
        int john_wins = 0;
        for (int i = 0; i < N; i++) {
            int R;
            cin >> R;
            if (R == 0) mary_wins++;
            else john_wins++;
        }
        cout << "Mary won " << mary_wins << " times and John won " << john_wins << " times" << endl;
    }
    return 0;
}
