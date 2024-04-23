#include <iostream>
#include <vector>

using namespace std;

int buscaBinaria(vector<int>& A, int alvo) {
    int esquerda = 0;
    int direita = A.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (A[meio] == alvo) {
            return meio; 
        } else if (A[meio] < alvo) {
            esquerda = meio + 1;
        } else {
            direita = meio - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> A = {1, 3, 5, 7, 9, 11, 13, 15};
    int alvo = 7;

    int resultado = buscaBinaria(A, alvo);

    if (resultado != -1) {
        cout << "Elemento " << alvo << " encontrado no índice " << resultado << endl;
    } else {
        cout << "Elemento " << alvo << " não encontrado." << endl;
    }

    return 0;
}

/*
A complexidade temporal tanto no pior caso quanto no melhor caso da busca binária, tanto na forma iterativa quanto na recursiva, é O(log N), onde N é o tamanho do vetor.
A complexidade espacial da versão iterativa da busca binária é O(1), já na versão recursiva a complexidade espacial é O(log N).
*/