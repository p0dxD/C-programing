#include <stdio.h>
#define LOWER  0
#define UPPER 300
#define STEP 20

void main(){
	int fahr;
	printf("F to C using constants as variables\n");
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	}
}
