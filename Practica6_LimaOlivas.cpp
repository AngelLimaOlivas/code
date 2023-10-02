#include <stdio.h>
#include <math.h>
#define REQ (a*b)                                         //Utilizamos macros para definir REQ con operaciones a realizar con las variables 
#define SEQ (b/c)                                        //Utilizamos macros para definir SEQ con operaciones a realizar con las variables 

main(){	
   int a, b, c;                                         //definimos las variables a utilizar
   
   printf("Ingresa un numero: "); scanf("%d",&a);       //Pedimos los datos a utilizar en el programa 
   printf("Ingresa un numero: "); scanf("%d",&b); 
   printf("Ingresa un numero: "); scanf("%d",&c);      
   printf("%d\n",REQ);                                  // Se imprime el primer define despues de la operacion
     
   if (SEQ == 0){                                       //Evitamos realizar una divicion con cerro 
   return 0.0;                                          
   }
   else                                
   printf("%i",SEQ);                                    // Se imprime el segundo define siempre y cuando no sea cerro
   return 0;	
}
