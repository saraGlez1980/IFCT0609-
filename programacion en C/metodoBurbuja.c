#include <stdio.h>
#define MAX 100

int main() {	
	int total;
	int vNumeros[MAX]; 
	int j, i, temp; 
	
	printf ("Cuantos numeros deseas ordenar? "); 
	scanf("%d", &total);
	
	/* Lee y almacena los datos en el arreglo */
	for (i = 0; i < total; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &vNumeros[i]); 
	} 
	
	/* Método de búrbuja */
	for (i = 0; i < (total - 1); i++) // va a comparar todos los elementos del vector
    { 
		for (j = i + 1; j < total; j++) { //compara el elemento i con el resto
			if (vNumeros[j] < vNumeros[i]) { 
				temp = vNumeros[j]; 
				vNumeros[j] = vNumeros[i]; 
				vNumeros[i] = temp; // si es menor, intercambia
			} 
		} 
	} 
	
	/* Números ordenados */
	printf ("Los numeros ordenados son:\n"); 
	for (i = 0; i < total; i++) { 
		printf("%d | ", vNumeros[i]); 
	} 
	
	printf("\n"); 

}