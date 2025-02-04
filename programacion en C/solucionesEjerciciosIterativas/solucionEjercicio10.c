#include <stdio.h>
#include <math.h>

int main(void)
{
    int decimal, binario, base, residuo;
    binario=0;
    base=0;

    printf("introduce el numero decimal que desees convertir: ");
    scanf("%d",&decimal);

   while (decimal>0)
        {
            residuo=decimal%2;
            binario=binario+residuo*((int)pow(10,(double)base));
            base++;
            decimal=decimal/2;
        }

    printf("el numero en binario es: %d", binario);
    return 0;
}
