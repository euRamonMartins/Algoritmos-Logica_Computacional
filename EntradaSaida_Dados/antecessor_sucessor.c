/* Crie um programa em C que peça ao usuário um número inteiro.
Em seguida, mostre na tela qual é o número antecessor e o sucessor desse valor.*/

#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("O antecessor de %d e %d\n", N, N - 1);
    printf("O sucessor de %d e %d\n", N, N + 1);

    return 0;
}
