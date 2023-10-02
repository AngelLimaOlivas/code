#include <stdio.h>
#include <math.h>
#define PI 3.14                                        //Definimos la macros de PI

int main(){
	
	float r, area;
	
	printf("Ingresa el radio del circulo: ");         //tomamos el valor del radio (r)
	scanf("%f",&r);
	
	area = PI* pow(r, 2);                             //Realizamos la operacion para calcular el area del circulo utilisando "Pi" previamente definido  
                                                     //utilizamos pow para elevar la variable r al cuadrado 	
	printf("El area del circulo es: %.2f", area);
	
}	
	
