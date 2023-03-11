#include <stdio.h>
int main(){
    int j=1;
    while (j<=30)
    {
        if (j%4==0)
        {
            printf("-> %d\n",j);
        }
        j++;
    }
    return 0;
}