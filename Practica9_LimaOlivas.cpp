#include <stdio.h>
                                      
int main(){	
   	
   	struct datos{                                         //Creacion de una lista llamada datos
   		
   		int a;                                            //Variables
   		float b;
   		float c = (float)a+b;                             //Forzar una o 2 variables a float para una operacion
	   };
	   struct datos d1;                                   //Identificador de la lista
	   
	   printf("Dame un dato: "); scanf("%i",&d1.a);       //Impresion de datos
	   printf("Dame un dato: "); scanf("%f",&d1.b);
	   printf("Los datos son: %i, %f",d1.a, d1.b);
}
