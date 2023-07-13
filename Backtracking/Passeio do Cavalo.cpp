#include <bits/stdc++.h>
using namespace std;

#define MAX_N 20
// tab é o tabuleiro em questão
int tab[MAX_N][MAX_N], n;
// todos os movimentos possiveis do cavalo, representando respectivamente x e y
vector <pair<int, int>> mov = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};

void inicializa(int x, int y) {
    // Inicializo todo o tabuleiro como zero
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) tab[i][j] = 0;
    }
    // Posição atual do cavalo
    tab[x][y] = 1;
}

bool possicaovalida(int x, int y) {
    // x e y coordenadas do meu cavalo
    // Aqui determino posições validas pro meu cavalo
    // !tab[x][y] se essa posicao estiver marcada com 1, não entra como uma posicao valida
    return (x >= 0) && (x < n) && (y >= 0) && (y < n) && !tab[x][y];
}


int passeioCavalo(int x, int y) {
    // Se as coordenadas que eu passei forem igual ao n*n, significa que eu cheguei na ultima peça do tabuleiro
    if (tab[x][y] == n * n) return 1;
    // Aqui eu itero sobre os conjuntos dos pairs
    for (auto it : mov) {
        // x2 será atualizado a posicao que eu iniciei + a posicao valida do cavalo, faço a mesma coisa com o y
        int x2 = x + it.first;
        int y2 = y + it.second;
        // Se esse novo movimento for valido entra na condicao
        if (possicaovalida(x2, y2)) {
            // Esse novo movimento do cavalo vai ser igual o anterior + 1 indicando que ouve o movimento/progressao
            tab[x2][y2] = tab[x][y] + 1;
            // Se esse movimento chegou a uma solucao returno 1
            if (passeioCavalo(x2, y2)) return 1;
            // Se nao chegou desfaço o movimento
            tab[x2][y2] = 0;
        }
    }
    return 0;
}

void tabuleiro() {
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) printf("[%d]", tab[i][j]);

        cout << "\n";
    }
}

int main() {
    int x, y;
    cin >> n >> x >> y;
    inicializa(x, y);
    if (passeioCavalo(x, y)) tabuleiro();
    else {
        cout << "Solução não encontrada" << "\n";
    }
    return 0;
}