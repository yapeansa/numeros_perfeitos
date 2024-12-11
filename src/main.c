#include <stdio.h>
#include <stdbool.h>
#include "perfeito.h"

int main(void)
{
    int n;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    printf("O %d-ésimo número perfeito é: %d\n", n, encontra_perfeito(n));
    return 0;
}
