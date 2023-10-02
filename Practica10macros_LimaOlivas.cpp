#include <stdio.h>
#include <math.h>

#define  recx  (a*cos(b))                          //definimos los macros 
#define  recy  (a*sin(b))

int main() {
	struct Conversion {                             //creamos el struct
		double a=5,b=15;                           //variables a utilizar
		float RectX = recx, RectY=recy;
	};
	struct Conversion Conv;                        //Utilizamos el struc para conectar 
	
	
	scanf("%d %d",&Conv.a,&Conv.b);

	printf("X = %d      Y = %d", Conv.RectX, Conv.RectY);
}