#include <stdio.h>
#include <math.h>
                                      
int main(){

struct polar{                                   //Creamor una lista para pasar de coordenadas rectangulares a polares
float a, b;
};
struct polar d1;                                //Asignamos el identificador

struct rectangular{                             //Creamos la lista que hace la operacion de rectangular con la formula
float x, y;

x = a*cos(b);
y = a*sen(b);

};
struct rectangular d2;

printf("dame un dato: "); scanf("%f",&d1.a);    //Guardamos los datos en la primera lista
printf("dame un dato: "); scanf("%f",&d1.b);   
printf("%f, %f",d2.x,d2.y);                     //Imprimimos los resultados
}
