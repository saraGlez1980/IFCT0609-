#include <stdio.h>

int main(void)
{
    int year[12],i;
    int *puntero;
 
    for (i=0;i<11;i+=2) year[i]=31;
    year[1] = 28;
    for (i=3;i<10;i+=2) year[i]=30;
    
    puntero=year;

    for (i=0;i<11;i++)
    {
        printf("%d",*puntero);
        puntero++;
    }
    return 0;
}
