#include <stdio.h>

// Função para verificar se um número pertence à sequência de Fibonacci
int pertenceFibonacci(int num) {
    int a = 0, b = 1, prox = 0;

    // Caso especial para o número 0
    if (num == 0) {
        return 1;
    }

    // Calcula a sequência até o número ser maior ou igual ao informado
    while (prox < num) {
        prox = a + b;
        a = b;
        b = prox;
    }

    // Se o número for igual a 'prox', então pertence à sequência
    if (prox == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    // Entrada do número
    printf("Informe um número: ");
    scanf("%d", &num);

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
