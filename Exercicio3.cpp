#include <iostream>
#include <vector>

using namespace std;

bool estaOrdenado(vector<int>& A) {
    int tamanho = A.size();
    for (int i = 1; i < tamanho; ++i) {
        if (A[i] < A[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> A1 = {1, 2, 3, 4, 5};
    vector<int> A2 = {1, 3, 2, 4, 5};

    cout << "A1 está ordenado? " << (estaOrdenado(A1) ? "Sim" : "Não") << endl;
    cout << "A2 está ordenado? " << (estaOrdenado(A2) ? "Sim" : "Não") << endl;

    return 0;
}
/*
A complexidade temporal deste algoritmo é O(N) tanto no pior caso quanto no melhor caso, onde N é o tamanho do vetor.
Isso ocorre porque o algoritmo precisa percorrer todos os elementos do vetor uma vez para verificar se está ordenado.
*/