#include <stdio.h>
#include <stdbool.h>
#include "funcoes.h"

int main(void)
{
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O %d-ésimo número perfeito é: %d\n", n, encontraPerfeito(n));
    return 0;
}
