#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct carta {
int numero;
char palo[7];} Carta;


typedef char Palo[7];

void inicializar_mazo(Carta m[],Palo p[]);
void barajar(Carta m[]);
void imprimir(Carta m[]);

int main (void)
{
Carta mazo[48];
Palo p[4] = {"copa","oro","espada","basto"};
srand(time(NULL));
inicializar_mazo(mazo,p);
barajar(mazo);
imprimir(mazo);
return 0;
}

void copiar(char a, char b, int largo)
{
int i;
for (i=0;i < largo;i++)
a[i]=b[i];
}
void inicializar_mazo(Carta m[],Palo p[])
{
int i;
for (i=0; i < 48;i++)
{
m[i].numero=(i % 12)+1;
copiar(m[i].palo,p[i/12],7);
}
}
void barajar(Carta m[])
{
int i,j;
Carta temp;
for (i=0; i < 48; i++)
{
j = rand() % 48;
temp = m[i];
m[i] = m[j];
m[j] = temp;
}
}
void imprimir(Carta m[])
{
int i,j;
char c;
for (i=0; i < 48; i++)
{
printf ("%i de", m[i].numero);
printf ("%s", m[i].palo);
printf ("\n");
}
}
