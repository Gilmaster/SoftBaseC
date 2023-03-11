#include <stdio.h>
int main()
{
    int x=1,soma=0;
        while (x<=100)
        {
            soma = soma + x;
            x++;
        }
        printf("A soma dos 100 primeiros numeros inteiros e: %d\n",soma);
    return 0;
}