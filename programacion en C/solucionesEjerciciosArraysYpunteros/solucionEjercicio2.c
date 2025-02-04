#include <stdio.h>

int main(void)
{
    int max, min, maxFila, minFila,i,j;
    int tabla[3][2];

    for (i=0;i<3;i++)
    {
        for (j = 0;j < 2;j++)
        {
            printf("introduce el elemento en la fila %d y columna %d ",i,j);
            scanf("%d",&tabla[i][j]);
        }
    }
    //tabla inicializada;
    max=tabla[0][0];
    min=tabla[0][0];
    for (i=0;i<3;i++)
    {
        maxFila=tabla[i][0];
        minFila=tabla[i][0];
        for (j = 0;j < 2;j++)
        {
          if (tabla[i][j]>maxFila) maxFila=tabla[i][j];
          else
          {
            if (tabla[i][j]<minFila) minFila=tabla[i][j]; 
          }// fin del else     
        }
        printf("el maximo de la fila %d seria %d ",i+1,maxFila);
        printf("el minimo de la fila %d seria %d ",i+1,minFila);
        if (maxFila>max) max=maxFila;
        if (minFila<min) min=minFila;
    }
    printf("\nel maximo de toda la tabla es: %d",max);
    printf("\nel minimo de toda la tabla es: %d",min);

    return 0;
}
