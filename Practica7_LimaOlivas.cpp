#include <stdio.h>
#include <math.h>
#define inicio 0                                //Se define los valores a cada variable que se utilizara 
#define final 100
#define A 0.5

int main(void){

	int k;                                      //Creamos una variable para utilisar el for 
	float y = inicio;                           //Le asignamos un valor
	
	for (k = inicio; k < final; k++){           //Ciclo for desde 0 hasta 100 incrementa 1
	
	printf("y = %d \n", y);                     //Imprimimos cada y
	y = A*y;                                    //A cada valor de y le multiplicamos A
	}
	
}	
	
