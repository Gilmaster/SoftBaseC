#include <stdio.h>

int main()
{
    int n, fat = 1;
    printf("Informe o numero: ");
    scanf("%d",&n);
    while(n >= 1)
    {
        fat *= n;
        n--;
    }
    printf("O fatorial do Numero é: %d\n",fat);
    return 0;
}
