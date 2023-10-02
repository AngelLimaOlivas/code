#include <stdio.h>
#include <math.h>
#define REQ (a*b)/(a+b)                                 //Utilizamos macros para definir REQ con operaciones a realizar con las variables 

int main(){	
   int a, b;                                            //definimos el tipo y el nombre de la variables 
   
   printf("Ingresa un numero: "); scanf("%d",&a);       //Pide un numero y lo guarda en la variable a 
   printf("Ingresa un numero: "); scanf("%d",&b);       //Pide otro numero y lo guarda en la variable b
   printf("%d",REQ);                                    // Se imprime el define despues de la operacion
   
   return 0;	                                        //retornamos en cero para que no quede basura almacenada 
} 
