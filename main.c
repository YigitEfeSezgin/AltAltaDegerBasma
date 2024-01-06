#include <stdio.h>
#include <stdlib.h>
void ucgenc(int n)
{
    int i,j;
    int bosluksayisi=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }
        bosluksayisi--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("c");
        }
        printf("\n");
    }
}

int main()
{
    int satir;
    printf("satir sayisi giriniz\n");
    scanf("%d",&satir);
    ucgenc(satir);
    return 0;
}


