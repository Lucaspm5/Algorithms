#include <bits/stdc++.h>

using namespace std;

int main() {
    string mensagem_cifrada, crib;
    cin >> mensagem_cifrada >> crib;

    int possibilidades = 0;
    for (int i = 0; i <= mensagem_cifrada.size() - crib.size(); i++) {
        bool possivel = true;
        for (int j = 0; j < crib.size(); j++) {
            if (mensagem_cifrada[i + j] == crib[j]) {
                possivel = false;
                break;
            }
        }
        if (possivel) possibilidades++;
    }

    cout << possibilidades << endl;

    return 0;
}
