#include "cportugues.h"

inteiro funcao_principal() //main
{
    inteiro semsinal a vira 2;
    pontoflutuante b vira 3.14;

    para(inteiro i vira 1; i menor_que 11; i mais_um)
    {
        se(i diferente_de 5)
        {
            escreve("pi vezes %d = ", i vezes a);
            escreve("%2.2f\n", i vezes b);
        }
        senao{
            escreve("Aqui era o cinco\n");
        }
    }

    inteiro x vira 5;
    fazer
    {
        escreve("A-%d ", x);
        x mais_um;
    }
    enquanto(x menor_que 10);

    retorno 0;
}