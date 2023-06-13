#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int TAM = 9;

void gerarMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cin >> matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool verificarLinha(int matriz[TAM][TAM], int linha) {
    bool numeros[TAM + 1] = {false};
    for (int i = 0; i < TAM; i++) {
        if (numeros[matriz[linha][i]]) {
            return false;
        }
        numeros[matriz[linha][i]] = true;
    }
    return true;
}

bool verificarColuna(int matriz[TAM][TAM], int coluna) {
    bool numeros[TAM + 1] = {false};
    for (int i = 0; i < TAM; i++) {
        if (numeros[matriz[i][coluna]]) {
            return false;
        }
        numeros[matriz[i][coluna]] = true;
    }
    return true;
}

bool verificarSubmatriz(int matriz[TAM][TAM], int linhaInicio, int colunaInicio) {
    bool numeros[TAM + 1] = {false};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (numeros[matriz[linhaInicio + i][colunaInicio + j]]) {
                return false;
            }
            numeros[matriz[linhaInicio + i][colunaInicio + j]] = true;
        }
    }
    return true;
}


int main() {
    int t;
    cin >> t;
    int i = 0;
    int matriz[TAM][TAM];
    while (t--) {
        i++;
        gerarMatriz(matriz);
        imprimirMatriz(matriz);

        cout << "Instancia " << i << endl;
        if (verificarMatriz(matriz)) {
            cout << "SIM" << endl;
        } else {
            cout << "NAO" << endl;
        }
        cout << endl;
    }
    return 0;
}

