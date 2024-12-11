#include <stdbool.h>
#include "perfeito.h"

bool verifica_se_e_perfeito(int k)
{
    int soma = 0;

    for (int i = 1; i < k; i++)
        if (k % i == 0)
            soma += i;

    if (k == soma)
        return true;
    else
        return false;
}

int encontra_perfeito(int n)
{
    int count = 0,
        i = 1,
        num_perfeito;
    bool procura = true;

    while (procura)
    {
        if (verifica_se_e_perfeito(i))
            count++;

        if (n == count)
        {
            num_perfeito = i;
            procura = false;
        }

        i++;
    }

    return num_perfeito;
}
