#include <stdio.h>
int main()
{
    int k=1,soma=0;
    while (k<=50)
    {
        if (k%2==0)
        {
            soma = soma + k;
            printf("A soma dos numeros pares e: %d\n",soma);
        }
        k++;
    }
    return 0;
}