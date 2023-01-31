#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int concat(int a, int b)
{
 
    char s1[20];
    char s2[20];
 
    // Convert both the integers to string
    sprintf(s1, "%d", a);
    sprintf(s2, "%d", b);
 
    // Concatenate both strings
    strcat(s1, s2);
 
    // Convert the concatenated string
    // to integer
    int c = atoi(s1);
 
    // return the formed integer
    return c;
}





int main(){
	int array[] = {0, 9};
	//'N' Potencia
//	int N = sizeof(array)/sizeof(array[0]);
	int N = 1;
	//Primer elemento a la N potencia
	double k0 = pow( array[0], N);
	//Segundo elemento a la N potencia
	double k1 = pow( array[1], N);
	//Suma de potencias
	double k = k0 + k1;
	//Concatena dos enteros en orden [decenas, unidades] = double DU;
	double concatenacion = concat(array[0], array[1]);

	//Si la suma de potencias es igual al numero itself(concatenacion) es narciso.
	if(k == concatenacion){
		printf("Se cumplio la comparacion, es narciso: %.1f = %.1f\n", k, concatenacion);
	}
	//esto es lo que pasa si no es narciso
	else{
		array[1] = array[1] + 1;
	}
//	printf("El número de elementos es: %u\n\n", num_elementos);
	printf("El elemento array[0] es: %i \n\n", array[0]);
	printf("El elemento array[1]: %i \n\n", array[1]);
/*	for(int i = 0; i < array[0]; i++){
		printf("--------%d---------\n\n", i);	
	}*/
//	printf("El valor de concatenacion es %.2f\n", concatenacion);
//	printf("El valor de k es %f\n", k);
	return 0;
}
