#include <iostream>

using namespace std;

int fibonacciIterativo(int n) {
    if (n <= 1)
        return n;

    int fib = 1;
    int prev = 1;

    for (int i = 2; i < n; ++i) {
        int temp = fib;
        fib += prev;
        prev = temp;
    }

    return fib;
}

int main() {
    int N = 10;

    int resultado = fibonacciIterativo(N);

    cout << "O valor na posição " << N << " da sequência de Fibonacci é: " << resultado << endl;

    return 0;
}

/*
A complexidade temporal do algoritmo de Fibonacci iterativo é O(N) no pior caso.
A complexidade temporal da versão recursiva é exponencial, aproximadamente O(2^N) no pior caso.
Isso ocorre porque a cada chamada recursiva, o número de chamadas duplica, resultando em chamadas de recursão exponencial.
Portanto, a versão recursiva é significativamente menos eficiente do que a versão iterativa, especialmente para valores grandes de N.
Sim, é possível melhorar a versão recursiva do algoritmo de Fibonacci usando uma técnica chamada memoização.
*/