#include <stdbool.h>
#include "funcoes.h"

bool verificaPerfeito(int k)
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

int encontraPerfeito(int n)
{
    int count = 0, num_perfeito;
    bool procura = true;

    while (procura)
    {
        for (int i = 1; i >= 1; i++)
        {
            if (verificaPerfeito(i))
                count++;
            if (n == count)
            {
                num_perfeito = i;
                procura = false;
                break;
            }
        }
    }

    return num_perfeito;
}
