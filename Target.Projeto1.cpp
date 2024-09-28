#include <stdio.h>

// Fun��o para verificar se um n�mero pertence � sequ�ncia de Fibonacci
int pertenceFibonacci(int num) {
    int a = 0, b = 1, prox = 0;

    // Caso especial para o n�mero 0
    if (num == 0) {
        return 1;
    }

    // Calcula a sequ�ncia at� o n�mero ser maior ou igual ao informado
    while (prox < num) {
        prox = a + b;
        a = b;
        b = prox;
    }

    // Se o n�mero for igual a 'prox', ent�o pertence � sequ�ncia
    if (prox == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    // Entrada do n�mero
    printf("Informe um n�mero: ");
    scanf("%d", &num);

    // Verifica se o n�mero pertence � sequ�ncia de Fibonacci
    if (pertenceFibonacci(num)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", num);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", num);
    }

    return 0;
}
