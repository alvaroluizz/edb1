#include <iostream>
#include <vector>

using namespace std;

int busca(vector<int>& A, int X, size_t index) {
    if (index == A.size())
        return -1;
    
    if (A[index] == X)
        return index;
    
    return busca(A, X, index + 1);
}

int buscaSequencial(vector<int>& A, int X) {
    return busca(A, X, 0);
}

int main() {
    vector<int> A = {3, 6, 2, 8, 1, 9};
    int X = 10;
    
    int result = buscaSequencial(A, X);
    
    if (result != -1)
        cout << "O valor " << X << " foi encontrado no indice " << result << " do vetor.\n";
    else
        cout << "O valor " << X << " não foi encontrado no vetor.\n";
    
    return 0;
}


/* A complexidade temporal no pior caso da busca sequencial recursiva é O(N), onde N é o tamanho do vetor.
Demonstrando matematicamente:
Seja T(N) a função que descreve a complexidade temporal no pior caso da busca sequencial recursiva.

T(N) = T(N-1) + O(1)

Onde:

T(N) = T(N-2) + O(1) + O(1)
T(N) = T(N-3) + O(1) + O(1) + O(1)
...
T(N) = T(1) + O(1) + O(1) + ... + O(1)

Como T(1) é uma constante, podemos simplificar:

T(N) = O(1) + O(1) + ... + O(1) (N vezes)

Portanto, a complexidade temporal no pior caso é O(N).

A complexidade no pior caso da versão iterativa também é O(N), já que ambas as versões percorrem todo o vetor em busca do elemento X.
*/