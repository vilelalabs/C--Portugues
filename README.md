# C++Portugues

Apenas uma brincadeira com as palavras chaves e alguns símbolos e funções do **C++**

## Exemplo de código 
```C++
#include "cportugues.h"

inteiro funcao_principal() {
    inteiro a vira 2;
    pontoflutuante b vira 3.14;

    para(inteiro i vira 1; i menor_que 11; i mais_um) {
        se(i diferente_de 5)
        {
            escreve("pi vezes %d = ", i vezes a);
            escreve("%2.2f\n", i vezes b);
        }
    }

    inteiro x vira 5;
    fazer {
        escreve("A-%d ", x);
        x mais_um;
    }
    enquanto (x menor_que 10);

    retorno 0;
}
```
### Saída
```
pi vezes 2 = 3.14
pi vezes 4 = 6.28
pi vezes 6 = 9.42
pi vezes 8 = 12.56
pi vezes 12 = 18.84
pi vezes 14 = 21.98
pi vezes 16 = 25.12
pi vezes 18 = 28.26
pi vezes 20 = 31.40
A-5A-6A-7A-8A-9
```


