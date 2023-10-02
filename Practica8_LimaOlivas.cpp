#include <stdio.h>
#include <math.h>
#define y a&&b                                //se define cada variable con un operador tipo bool para poder utilizarlas
#define o a||b
#define noA !a
#define noB !b

int main(){
	int a = 1, b = 0;

	printf("%d,%d,%d", y, o, noA, noB);         //Se imprime cada operador tipo bool
	
}	
	
